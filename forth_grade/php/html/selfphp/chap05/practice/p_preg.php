<?php
$str = '住所は〒184-0000 鎌ヶ谷市梶野町0-0-0です。';
if (preg_match('/[0-9]{3}-[0-9]{4}/', $str, $data)){
  print $data[0];
}
