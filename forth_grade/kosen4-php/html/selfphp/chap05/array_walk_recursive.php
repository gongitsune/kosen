<?php
$sum = 0;
$count = 0;
$data = [5, 1, [10, -3]];
array_walk_recursive($data,
  function($value) use(&$sum, &$count) {
    $sum += $value;
    $count++;
  }
);
$average = $sum / $count;
print "要素の個数：{$count}";
print '<br />';
print "合計値：{$sum}";
print '<br />';
print "平均値：{$average}";
