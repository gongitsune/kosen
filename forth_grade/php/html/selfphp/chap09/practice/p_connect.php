<?php
try {
  $db=new PDO('mysql:dbname=selfphp; host=127.0.0.1; charset=utf8', 'selfusr', 'selfpass');
  $db->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
  print 'データベースへの接続を確立しました。';
} catch (PDOException $e) {
  die("エラーメッセージ：{$e->getMessage()}");
}
