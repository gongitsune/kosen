<pre>
<?php
require_once 'MyMail.php';

$m = new MyMail();
$m->From = 'admin@example.com';
var_dump($m->From);
var_dump(isset($m->From));
unset($m->From);
var_dump($m->From);
