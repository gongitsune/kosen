<?php
$ref = new ReflectionClass(DateTime::class);
$method = $ref->getMethod('createFromFormat');
$dt = $method->invoke(null,
  'Y年m月d日 H時i分s秒', '2021年8月20日 14時55分15秒');
print($dt->format('Y-m-d H:i:s'));
