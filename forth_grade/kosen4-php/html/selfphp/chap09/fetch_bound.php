<?php
require_once '../DbManager.php';

try {
  $db = getDb();
  $stt = $db->prepare('SELECT * FROM photo WHERE id = ?');
  $stt->bindValue(1, $_GET['id'] ?: 1);
  $stt->execute();
  $stt->bindColumn('type', $type, PDO::PARAM_STR);
  $stt->bindColumn('data', $data, PDO::PARAM_LOB);
  if ($stt->fetch(PDO::FETCH_BOUND)) {
    header("Content-Type: {$type}");
    print $data;
  } else {
    print '該当するデータがありません。';
  }
} catch(PDOException $e) {
  die("エラーメッセージ：{$e->getMessage()}");
}
