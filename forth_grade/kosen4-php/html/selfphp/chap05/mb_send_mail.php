<?php
$to = 'wings@example.com';
$subject = '独習PHP 改訂版';
$body = "こんにちは、mb_send_mail関数！\nどうですか？";
$headers  = "From : user01@example.com\n";
$headers .= "Cc : yamada@example.com\n";
$headers .= "X-Mailer : PHP 8\n";
// $headers = [
//     'From' => 'user01@example.com',
//     'Cc' => 'yamada@example.com',
//     'X-Mailer' => 'PHP 8',
// ];
if (mb_send_mail($to, $subject, $body, $headers)) {
  print 'メール送信に成功しました。';
} else {
  print 'メール送信に失敗しました。';
}
