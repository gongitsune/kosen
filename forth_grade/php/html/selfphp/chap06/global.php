<?php
$x = 10;

function checkScope(): int {
  global $x;
  // unset($x);
  unset($GLOBALS['x']);
  return ++$x;
}

print checkScope();
print '<br />';
print $x;
