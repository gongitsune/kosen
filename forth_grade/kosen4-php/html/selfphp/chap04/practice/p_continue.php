<?php
$sum = 0;
$i = 0;
while ($i <= 100) {
  $i++;
  if ($i % 2 !== 0) { continue; }
  $sum += $i;
}
print "合計値は{$sum}です。";
