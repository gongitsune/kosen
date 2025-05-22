<?php
$dt = new DateTime();
print $dt->format('Y年m月d日') . '<br />';
print $dt->format('Y年m月t日') . '<br />';
$dt->add(new DateInterval('P1M10D'));
print $dt->format('Y年m月d日');
