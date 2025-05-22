<pre>
<?php
$data = ['高江', '青木', '片渕', '和田', '花田', '佐藤'];
print_r(array_slice($data, 2, 3));
print_r(array_slice($data, 2, 3, true));
print_r(array_slice($data, 4));
print_r(array_slice($data, -4, -3));
