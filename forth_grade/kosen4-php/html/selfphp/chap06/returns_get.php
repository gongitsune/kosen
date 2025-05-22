<pre>
<?php
require_once 'returns.php';

$result = max_min(10, 2, -5, 3, 78);
print_r($result);
[$max, $min] = max_min(10, 2, -5, 3, 78);
print "最大値：{$max}、最小値：{$min}";
