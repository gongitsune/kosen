<?php
if (!preg_match('/\A\w+([-+.\']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*\z/i',
  $_POST['from'])) {
  die('不正なメールアドレスです。');
}

mb_send_mail('wings@example.com', $_POST['subject'], $_POST['body'], 
  "From: {$_POST['from']}");
print 'メールが送信されました。';
