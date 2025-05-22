<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8" />
<title>メール送信</title>
</head>
<body>
<form method="POST" action="mail_send.php">
<div>
  <label for="subject">件名：</label><br />
  <input id="subject" type="text" name="subject" size="20" maxlength="30" />
</div>
<div>
  <label for="from">差出人：</label><br />
  <textarea id="from" name="from" cols="30" rows="2"></textarea>
</div>
<div>
  <label for="body">本文：</label><br />
  <textarea id="body" name="body" cols="50" rows="5"></textarea>
</div>
<div>
  <input type="submit" value="送信" />
</div>
</form>
</body>
</html>
