<?php
function myArrayWalk(array $array, callable $func) : void  {
  foreach ($array as $key => $value) {
    $func($value, $key);
  }
}

$result = 0;
function total(float $value, int $key) : void {
  global $result;
  $result += $value;
}

$data = [100, 50, 10, 5];
myArrayWalk($data, 'total');
print "合計値：{$result}";
