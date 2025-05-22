<?php
$data1 = [10, 15, 30];
$data2 = [60, 90];
$data1[] = 50;
array_shift($data1);
array_splice($data1, 1, 0, 20);
print_r(array_merge($data1, $data2));
