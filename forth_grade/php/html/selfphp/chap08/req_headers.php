<?php require_once '../Encode.php'; ?>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8" />
<title>ヘッダー情報</title>
<link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.5.0/css/bootstrap.min.css" />
</head>
<body>
<table class="table">
<?php
foreach($_SERVER as $key => $value) {
  if (str_starts_with($key, 'HTTP_')) {
  // PHP7.4以下を使用する場合は、以下で書換
  // if (mb_strpos($key, 'HTTP_') === 0) {
?>
  <tr valign="top">
  <th><?=e($key) ?></th>
  <td><?=e($value) ?></td>
  </tr>
<?php
  }
}
?>
</table>
</body>
</html>
