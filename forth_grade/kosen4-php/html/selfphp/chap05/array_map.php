<?php
$data = [1, 2, 3];
$result = array_map(function($v) { return $v * $v; }, $data);
print_r($result);
