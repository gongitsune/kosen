<?php
function factorial(int $num): int {
  if ($num !== 0) { return $num * factorial($num - 1); }
  return 1;
}

print factorial(5);
