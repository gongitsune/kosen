<?php
require_once '../vendor/autoload.php';
$str = '<div onclick="alert(\'ほげーー！\')">HogeHoge</div>';
$pur = new HTMLPurifier();
print $pur->purify($str);
