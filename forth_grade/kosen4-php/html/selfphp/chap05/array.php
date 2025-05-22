<?php
$data = ['高江', '青木', '片渕'];
print array_push($data, '山田', '土井');
print '<br />';
print_r($data);
print '<br />';
print array_pop($data);
print '<br />';
print_r($data);
print '<br />';
print array_shift($data);
print '<br />';
print_r($data);
print '<br />';
print array_unshift($data, '掛谷', '横塚', '上垣');
print '<br />';
print_r($data);
