<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8" />
<title>書籍の検索</title>
</head>
<body>
<form method="POST" action="prac4.php">
<label for="title">書名：</label>
<input id="title" type="text" name="title" size="20" />
<input type="submit" value="検索" />
</form>
<?php
if (isset($_POST['title'])) {
  require_once '../../DbManager.php';
  require_once '../../Encode.php';

  try {
    $db = getDb();
    $stt = $db->prepare('SELECT * FROM book WHERE title LIKE ?');
    $stt->bindValue(1, '%'.$_POST['title'].'%');
    // $stt = $db->prepare('SELECT * FROM book WHERE title LIKE :title');
    // $stt->bindValue(':title', '%'.$_POST['title'].'%');
    $stt->execute();
    print '<ul>';
    while ($row = $stt->fetch(PDO::FETCH_ASSOC)) {
?>
      <li><?=e($row['title']) ?>
        （<?=e($row['price']) ?>円）</li>
<?php
    }
    print '</ul>';
  } catch (PDOException $e) {
    die("エラーメッセージ：{$e->getMessage()}");
  }
}
?>
</body>
</html>
