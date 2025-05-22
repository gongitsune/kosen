<?php
$data = ['高江', '掛谷', '日尾', '薄井', '和田'];
foreach ($data as &$value) {
//foreach ($data as $value) {
  $value = 'New' . $value;
}
print_r($data);
