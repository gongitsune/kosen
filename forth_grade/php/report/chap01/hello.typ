
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
hello.php
#v(0.6cm)
#text("Source code:")
```php
<!DOCTYPE html>
<html lang="ja">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PHPの基本</title>
</head>
<body>
<?php
// print命令は指定された文字列を表示するための命令です。
print 'こんにちは、世界！ <br />';
print 'こんにちは、皆さん！ ';
?>
</body>
</html>

```
#v(0.6cm)
#text("Output:")
#image("../../images/chap01/hello.jpg")
