<?php
function processNumber(callable $func, float ...$args): array {
  foreach ($args as $arg) {
    $result[] = $func($arg);
  }
  return $result;
}
[$x, $y] = processNumber(
  fn($num)=> $num ** 2,
  5, 15);
print $x;
print '<br />';
print $y;
