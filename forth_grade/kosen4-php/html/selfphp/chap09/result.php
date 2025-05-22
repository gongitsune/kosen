<?php
require_once '../DbManager.php';
require_once '../Encode.php';
?>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8" />
<title>結果セット</title>
<link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.0/css/bootstrap.min.css" />
</head>
<body>
<table class="table">
<thead>
<tr>
  <th>ISBNコード</th><th>書名</th><th>価格</th><th>出版社</th><th>刊行日</th>
</tr>
</thead>
<tbody>
<?php
try {
  $db = getDb();
  $stt = $db->prepare('SELECT * FROM book ORDER BY published DESC');
  $stt->execute();
  while($row = $stt->fetch(PDO::FETCH_ASSOC)) {

  // $stt->setFetchMode(PDO::FETCH_ASSOC);
  // foreach($stt as $row) { 
?>
  <tr>
    <td><?=e($row['isbn']) ?></td>
    <td><?=e($row['title']) ?></td>
    <td><?=e($row['price']) ?>円</td>
    <td><?=e($row['publish']) ?></td>
    <td><?=e($row['published']) ?></td>
  </tr>
<?php
  }
} catch(PDOException $e) {
  die("エラーメッセージ：{$e->getMessage()}");
}
?>
</tbody>
</table>
</body>
</html>
