<?php
require_once '../Encode.php';
session_start();
?>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8" />
<title>セッション情報</title>
</head>
<body>
<form method="POST" action="session2.php">
<label for="email">メールアドレス：</label>
<input id="email" type="text" name="email" size="40"
  value="<?=e($_SESSION['email'] ?? '') ?>" />
<input type="submit" value="送信" />
</form>
</body>
</html>
