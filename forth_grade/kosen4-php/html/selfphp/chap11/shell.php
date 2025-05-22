<?php
$result = shell_exec("dir {$_GET['param']}");
// $param = escapeshellarg($_GET['param']);
// $result = shell_exec("dir {$param}");
print mb_convert_encoding($result, 'UTF-8', 'SJIS');
