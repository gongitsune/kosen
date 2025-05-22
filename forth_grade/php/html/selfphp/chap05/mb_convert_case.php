<?php
$data1 = 'Wings project';
$data2 = 'ＷＩＮＧＳプロジェクト';
$data3 = 'Fußball';

print mb_convert_case($data1, MB_CASE_UPPER);
print '<br />';
print mb_convert_case($data1, MB_CASE_LOWER);
print '<br />';
print mb_convert_case($data1, MB_CASE_TITLE);
print '<br />';
print mb_convert_case($data2, MB_CASE_LOWER);
print '<br />';
print mb_convert_case($data3, MB_CASE_UPPER);
print '<br />';
print mb_convert_case($data3, MB_CASE_UPPER_SIMPLE);
