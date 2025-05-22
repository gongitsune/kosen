<?php
$str = 'にわにはにわにわとりがいる';
print mb_substr_count($str, 'にわ');
print '<br />';
$str = 'いちいちいちばにいち';
print mb_substr_count($str, 'いちいち');
