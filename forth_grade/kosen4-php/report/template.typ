#set page(margin: 1.5cm)
#set heading(numbering: "1.1.")
#set text(lang: "ja")

#set text(11pt, font: "Noto Sans CJK JP")


// 上部：左（学年・IT番号・名前）、右（提出日）
#columns(
  2,
  [
    4年 IT 23 豊島圭吾
    #colbreak()
    提出日 #datetime.today().display("[year] 年 [month] 月 [day] 日")
  ],
)

// 少しスペースを空ける
#v(1cm)

// 各セクションを表示
#text("Filename:")
// === FILENAME ===
heredoc.php
// === END ===
#v(0.6cm)

#text("Source code:")
// === SOURCE CODE ===
```php
<?php
$str = 'PHP（PHP:Hypertext Preprocessor）';
$msg = <<<EOD
{$str}は、サーバーサイドで動作する簡易なスクリプト言語です。
まずは、本書でじっくり基礎固めしましょう。<br />
"Let's start, everyone!!"
EOD;
print $msg;
```
// === END ===

#v(0.6cm)
#text("Output:")
// === OUTPUT ===
// #image("img/chap02/heredoc.png")
// === END ===
