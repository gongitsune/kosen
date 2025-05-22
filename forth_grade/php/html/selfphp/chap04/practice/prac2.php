<?php
$sum = 0;
$i = 0;
while ($i <= 100) {
  $i++;
  $sum += $i;
  if ($sum > 1000) { break; }
}
print "合計が1000を超えるのは、1～{$i}を加算したときです。";
