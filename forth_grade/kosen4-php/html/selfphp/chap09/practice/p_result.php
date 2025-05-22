<?php
require_once '../../DbManager.php';
require_once '../../Encode.php';

try {
  $db = getDb();
  $stt = $db->query('SELECT * FROM book ORDER BY published DESC');
  print '<ul>';
  while($row = $stt->fetch(PDO::FETCH_OBJ)) {
?>
    <li><?=e($row->title) ?>
      （<?=e($row->publish) ?>）</li>
<?php
  }
  print '</ul>';
} catch(PDOException $e) {
  die("エラーメッセージ：{$e->getMessage()}");
}
