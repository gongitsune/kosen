<?php
$dsn = 'mysql:dbname=selfphp; host=127.0.0.1; charset=utf8';
$usr = 'selfusr';
$passwd = 'selfpass2';

try {
  $db = new PDO($dsn, $usr, $passwd);
  print '接続に成功しました。';
} catch (Exception $e) {
  print "Exception：{$e->getMessage()}";
} catch (RuntimeException $e) {
  print "RuntimeException：{$e->getMessage()}";
} catch (PDOException $e) {
  print "PDOException：{$e->getMessage()}";
}
