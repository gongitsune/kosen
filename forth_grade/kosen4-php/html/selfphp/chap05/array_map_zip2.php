<?php
$data = ['ぱんだ', 'うさぎ', 'こあら'];
$data2 = ['panda', 'rabbit', 'koala'];

foreach (array_map(null, $data, $data2) as [$v1, $v2]) {
  print "{$v1}: {$v2}<br />";
}
