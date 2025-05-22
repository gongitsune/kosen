<pre>
<?php 
$data = ['PHP', 'JavaScript', 'PHP', 'Java', 'C#', '15'];
$data2 = ['X' => 10, 'Y'=> 20, 'Z' => 30];
var_dump(array_search('JavaScript', $data));
var_dump(array_search('PHP', $data));
var_dump(array_search('JAVA', $data));
var_dump(array_search(15, $data));
var_dump(array_search(15, $data, true));
var_dump(array_search(10, $data2));
