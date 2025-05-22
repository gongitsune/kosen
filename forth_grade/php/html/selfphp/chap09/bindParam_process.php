<?php
require_once '../DbManager.php';

try {
  $db = getDb();
  $stt = $db->prepare('UPDATE book SET title=:title, price=:price, publish=:publish, published=:published WHERE isbn=:isbn');
  $stt->bindParam(':isbn' ,$isbn);
  $stt->bindParam(':title' ,$title);
  $stt->bindParam(':price' ,$price);
  $stt->bindParam(':publish' ,$publish);
  $stt->bindParam(':published' ,$published);
  for($i = 1; $i <= $_POST['cnt']; $i++) {
    $isbn = $_POST['isbn'.$i];
    $title = $_POST['title'.$i];
    $price = $_POST['price'.$i];
    $publish = $_POST['publish'.$i];
    $published = $_POST['published'.$i];
    $stt->execute();
  }
  header('Location: http://'.$_SERVER['HTTP_HOST'].dirname($_SERVER['PHP_SELF']).'/bindParam_form.php');
} catch (PDOException $e) {
  die("エラーメッセージ：{$e->getMessage()}");
}
