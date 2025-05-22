<?php
$ref = new ReflectionClass(DateTime::class);
$method = $ref->getMethod('format');
$instance = $ref->newInstance('2021/06/25 11:37:36');
print($method->invoke($instance, 'Y年m月d日 g時i分s秒'));
