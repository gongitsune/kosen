<?php
$now = new DateTime();
$now->setDate(2021, 6, 25);
$now->setTime(14, 35, 59);
print $now->format('Y年m月d日 H:i:s');
