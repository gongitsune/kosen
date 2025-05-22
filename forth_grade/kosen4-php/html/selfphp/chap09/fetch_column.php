<pre>
<?php
require_once '../DbManager.php';

$db = getDb();
$stt = $db->query('SELECT publish, title FROM book');
print_r($stt->fetchAll(PDO::FETCH_COLUMN));
