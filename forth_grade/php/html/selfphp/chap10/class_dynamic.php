<?php
require_once 'Person2.php';

$p1 = new Person();
$p1->lastName = '山田';
$p1->firstName = '太郎';
$p1->age = 52;
$p2 = new Person();
$p2->lastName = '鈴木';
$p2->firstName = '花子';
print $p1->age;
print $p2->age;
