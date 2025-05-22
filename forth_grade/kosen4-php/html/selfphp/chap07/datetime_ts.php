<?php
$now = new DateTime();
$now->setTimestamp(time());
print $now->format('Y年m月d日 H:i:s');
