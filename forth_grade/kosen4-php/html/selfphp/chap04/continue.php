<?php
$sum = 0;
for ($i = 1; $i <= 100; $i++) {
  if ($i % 2 !== 0) { continue; }
  $sum += $i;
}
print "合計値は{$sum}です。";
