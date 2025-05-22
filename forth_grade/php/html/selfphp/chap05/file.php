<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8" />
<title>アクセスログ</title>
<link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.0/css/bootstrap.min.css" />
</head>
<body>
<table class="table">
<thead>
<tr>
  <th>アクセス日時</th><th>スクリプト名</th>
  <th>ユーザーエージェント</th><th>リンク元のURL</th>
</tr>
</thead>
<tbody>
<?php
$file = file('access.log', FILE_IGNORE_NEW_LINES);
foreach ($file as $fline) {
  $line = explode("\t", $fline);
  print '<tr>';
  foreach ($line as $value) {
    print '<td>' . $value . '</td>';
  }
  print '</tr>';
}
?>
</tbody>
</table>
</body>
</html>
