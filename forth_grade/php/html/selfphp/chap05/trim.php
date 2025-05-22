<?php
$str = "  こんにちは \t\n\r";
var_dump($str);
print '<br />';
var_dump(trim($str));
print '<br />';
var_dump(ltrim($str));
print '<br />';
var_dump(rtrim($str));
print '<br />';

$str2 = '!======［独習PHP］======!';
var_dump(trim($str2, "!=［］"));
