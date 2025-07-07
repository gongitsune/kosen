import { exists, mkdir, readdir } from "node:fs/promises";
import { parseArgs } from "node:util";
import { Browser, Builder, By } from "selenium-webdriver";
import { Options } from "selenium-webdriver/chrome";
import sharp from "sharp";
import { $ } from "bun";

const cli = async () => {
	const { values } = parseArgs({
		args: Bun.argv,
		options: {
			s: {
				type: "string",
			},
			overwrite: {
				type: "boolean",
			},
		},
		strict: true,
		allowPositionals: true,
	});

	if (!values.s) {
		console.error("value error");
		return;
	}

	const split_s = values.s.split("/");
	const chapter = split_s.find((v) => v.startsWith("chap"));
	const file_name = split_s
		.findLast((v) => v.endsWith("php"))
		?.replace(".php", "");
	const output_image = `images/${chapter}/${file_name}.jpg`;

	const php = await Bun.file(values.s).text();

	const driver = new Builder()
		.forBrowser(Browser.CHROME)
		.usingServer("http://localhost:4444/wd/hub")
		.setChromeOptions(new Options())
		.build();

	const images: string[] = [];

	// take screen shot
	try {
		const url = `http://php/selfphp/${chapter}/${file_name}.php`;
		console.log(`Request: ${url}`);
		await driver.get(url);
		await driver.executeScript("document.body.style.zoom='1.5'");

		// find form elements
		const form_elems = await driver.findElements(By.css("form"));
		console.log(`Found ${form_elems.length} form elements.`);

		// create images directory
		await mkdir(`images/${chapter}`, { recursive: true });

		const take_screenshot = async (path: string) => {
			const base64 = await driver.takeScreenshot();
			await sharp(Buffer.from(base64, "base64"))
				.trim({
					threshold: 10,
				})
				.toFile(path);
			return path;
		};

		if (form_elems.length > 0) {
			for await (const form_elem of form_elems) {
				const labels = await form_elem.findElements(By.css("label"));
				const names = labels.map((label_elem) =>
					label_elem.getAttribute("for"),
				);

				for await (const name of names) {
					const input_elem = await form_elem.findElement(By.name(name));
					const user_input = prompt(`input (${name}):`);
					if (user_input) {
						input_elem.sendKeys(user_input);
						console.log(`Send "${user_input}" to input element (${name})`);
					}
				}

				const submit_elems = await form_elem.findElements(
					By.css('input[type="submit"]'),
				);
				console.log(`Found ${submit_elems.length} input(submit) elements.`);

				for await (const submit_elem of submit_elems) {
					prompt(`Submit (${await submit_elem.getAttribute("value")}):`);

					images.push(
						await take_screenshot(
							`images/${chapter}/${file_name}_${images.length}.jpg`,
						),
					);
					await submit_elem.submit();
					images.push(
						await take_screenshot(
							`images/${chapter}/${file_name}_${images.length}.jpg`,
						),
					);
				}
			}
		} else {
			images.push(
				await take_screenshot(output_image),
			);
		}
	} finally {
		await driver.quit();
	}

	// create report pdf
	const report = `
#set page(margin: 1.5cm)
#set heading(numbering: "1.1.")
#set text(lang: "ja")
#set text(11pt, font: "Noto Sans CJK JP")
#columns(
  2,
  [
    4年 IT 23 豊島圭吾
    #colbreak()
    提出日 #datetime.today().display("[year] 年 [month] 月 [day] 日")
  ],
)
#v(1cm)
#text("Filename:")
${file_name}.php
#v(0.6cm)
#text("Source code:")
\`\`\`php
${php}
\`\`\`
#v(0.6cm)
#text("Output:")
${images.map((path) => `#image("../../${path}")`).join("\n")}
`;
	const report_file = `report/${chapter}/${file_name}.typ`;
	await Bun.write(report_file, report, {
		createPath: true,
	});

	// compile to pdf
	if (!(await exists("submits"))) await mkdir("submits");
	const prev_pdf_num = (await readdir("submits"))
		.filter((v) => v.endsWith("pdf"))
		.reduce((prev, curr) => {
			const num = Number.parseInt(curr.slice(-7, -4));
			return num > prev ? num : prev;
		}, 1);
	const pdf_num = (values.overwrite ?? false) ? prev_pdf_num : prev_pdf_num + 1;
	const report_pdf_path = `submits/IT23豊島圭吾${pdf_num.toString().padStart(3, "0")}.pdf`;
	await $`typst compile --root ${process.cwd()} ${report_file} ${report_pdf_path}`;
};

cli();
