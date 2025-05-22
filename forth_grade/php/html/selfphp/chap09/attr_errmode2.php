<?php
require_once '../DbManager.php';

try {
  $db = getDb();
  $db->exec('MECHA KUCHA');
} catch (PDOException $e) {
  print "エラーコード：{$e->getCode()} <br />";
  print "エラーメッセージ：{$e->getMessage()}";
}
