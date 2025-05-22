<?php
$x = 10;

function checkScope(): int {
  return ++$x;
}

print checkScope();
print '<br />';
print $x;
