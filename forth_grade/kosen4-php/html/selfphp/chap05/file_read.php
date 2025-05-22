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
$file = fopen('access.log', 'r');
flock($file, LOCK_SH);
while ($line = fgetcsv($file, 1024, "\t")) {
// while ($fline = fgets($file, 1024)) {
//   $line = explode("\t", trim($fline));
  print '<tr>';
  foreach ($line as $value) {
    print '<td>' . $value . '</td>';
  }
  print '</tr>';
}
flock($file, LOCK_UN);
fclose($file);
?>
</tbody>
</table>
</body>
</html>
