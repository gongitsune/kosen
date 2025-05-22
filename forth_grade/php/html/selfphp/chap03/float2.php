<?php 
$add = bcadd(0.1, 0.7, 1);
$mul = bcmul($add, 10, 1);
print floor($mul);
