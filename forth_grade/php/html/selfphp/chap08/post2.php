<?php require_once '../Encode.php'; ?>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8" />
<title>ポストデータ</title>
</head>
<body>
<!--こんにちは、<?=$_POST['name'] ?>さん！-->
こんにちは、<?=e($_POST['name']) ?>さん！
</body>
</html>
