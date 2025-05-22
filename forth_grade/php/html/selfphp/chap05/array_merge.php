<pre>
<?php
$ary1 = [1, 3, 5];
$ary2 = [2, 3, 6];
$result = array_merge($ary1, $ary2);
print_r($result);

$assoc1 = ['Apple' => 'Red', 'Orange' => 'Yellow', 'Melon' => 'Green'];
$assoc2 = ['Grape' => 'Purple', 'Apple' => 'Green', 'Strawberry' => 'Red'];
$result = array_merge($assoc1, $assoc2);
// $result = array_merge_recursive($assoc1, $assoc2);
print_r($result);
