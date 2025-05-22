<?php
require_once '../DbManager.php';

$db = getDb();
$stt = $db->query("SELECT title AS name, publish AS name FROM book WHERE isbn='978-4-7981-4102-2'");
print_r($stt->fetch(PDO::FETCH_NAMED));
