import { Browser, Builder } from "selenium-webdriver";
import { Options } from "selenium-webdriver/chrome";

const driver = new Builder()
	.forBrowser(Browser.CHROME)
	.usingServer("http://localhost:4444/wd/hub")
	.setChromeOptions(new Options())
	.build();

try {
	await driver.get("http://php/selfphp/chap01/hello.php");
} finally {
	await driver.quit();
}
