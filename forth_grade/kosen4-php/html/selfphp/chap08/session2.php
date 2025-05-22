<?php
session_start();
$_SESSION['email'] = $_POST['email'];
?>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8" />
<title>セッション情報</title>
</head>
<body>
セッション情報を保存しました。
</body>
</html>
