<?php
$rank = '甲';
$result = match($rank) {
  '甲' => '大変良いです。',
  '乙' => '良いです。',
  '丙' => 'もう少しがんばりましょう。',
  default => '？？？'
};
print $result;
