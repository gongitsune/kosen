const ieeeFormat = (title, url, date) => {
  const year = date.getFullYear();
  const month = date.getMonth() + 1;
  const day = date.getDate();
  return `「${title}」. 参照:${year} 年 ${month} 月 ${day} 日. [Online]. 入手先:${url}`;
};

const apaFormat = (title, url, date) => {
  const year = date.getFullYear();
  const month = date.getMonth() + 1;
  const day = date.getDate();
  return `${title}. 読み込み ${year} 年 ${month} 月 ${day} 日, から ${url}`;
};

const mlaFormat = (title, url, date) => {
  const year = date.getFullYear();
  const month = date.getMonth() + 1;
  const day = date.getDate();
  return `${title}, ${url}. 参照 ${year} 年 ${month} 月 ${day} 日`;
};

const fetchTitle = async (url, decodeArea) => {
  try {
    const res = await fetch("https://report-tool.toyo-keigo518.workers.dev/", {
      method: "POST",
      body: JSON.stringify({ url }),
    });
    decodeArea.innerHTML = await res.text();
    const title = decodeArea.value;
    return title;
  } catch (e) {
    console.error(e);
    return null;
  }
};

window.addEventListener("load", () => {
  const decodeArea = document.createElement("textarea");
  const addRefBtn = document.getElementById("add-ref-btn");
  const delRefBtn = document.getElementById("del-ref-btn");
  const styleSelect = document.getElementById("style-select");
  const urlInput = document.getElementById("url-input");
  const refList = document.getElementById("ref-list");

  addRefBtn.addEventListener("click", () => {
    const url = urlInput.value;
    const style = styleSelect.value;
    if (url === "") {
      alert("URLを入力してください");
      return;
    }
    if (style === "") {
      alert("スタイルを選択してください");
      return;
    }

    const date = new Date();
    fetchTitle(url, decodeArea).then((title) => {
      if (title === null) {
        alert("タイトルの取得に失敗しました");
        return;
      }
      let refText = "";
      switch (style) {
        case "ieee":
          refText = ieeeFormat(title, url, date);
          break;
        case "apa":
          refText = apaFormat(title, url, date);
          break;
        case "mla":
          refText = mlaFormat(title, url, date);
          break;
      }

      refList.insertAdjacentHTML(
        "beforeend",
        `
        <div
            tabindex="0"
            class="collapse collapse-open bg-base-100 flex-shrink-0"
        >
            <div class="collapse-title text-xl font-medium">
                ${title}
            </div>
            <div class="collapse-content">
                <p>${refText}</p>
            </div>
        </div>
        `
      );
    });
  });
  delRefBtn.addEventListener("click", () => {
    refList.innerHTML = "";
  });
});
