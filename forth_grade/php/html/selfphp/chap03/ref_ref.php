<?php
$x = 1;
$y = &$x;
$x = 5;
print $y;
