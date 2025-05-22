<?php
require_once 'MyMail.php';

$m = new MyMail();
$m->From('admin@example.com');
print $m->From();
