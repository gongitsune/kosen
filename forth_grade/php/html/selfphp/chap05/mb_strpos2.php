<?php
$str = 'にわにはにわにわとりがいる';
if (mb_strpos($str, 'にわ') != false) {
//if (mb_strpos($str, 'にわ') !== false) {
  print '文字列が見つかりました。';
}
