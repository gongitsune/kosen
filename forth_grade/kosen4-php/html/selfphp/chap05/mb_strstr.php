<?php
$str = 'WINGSプロジェクト';
print mb_strstr($str, 'S', true);
print '<br />';
print mb_strstr($str, 'S');
print '<br />';
print mb_strstr($str, 'M', false);
print '<br />';
