<pre>
<?php
$data01 = [1, 2, 3];
$data02 = [1, 5];
var_dump($data01 < $data02);

$data11 = [1, 2, 3];
$data12 = [1, 5, 1];
var_dump($data11 < $data12);

$data21 = [1, 2, 3];
$data22 = [1, 2, '3'];
var_dump($data21 == $data22);
var_dump($data21 === $data22);

$data31 = ['A' => 'a', 'B' => 'b', 'C' => 'c'];
$data32 = ['A' => 'a', 'C' => 'c', 'B' => 'b'];
var_dump($data31 == $data32);
var_dump($data31 === $data32);
