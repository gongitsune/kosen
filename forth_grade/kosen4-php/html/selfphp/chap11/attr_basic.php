<?php
require 'class_info.php';

#[ClassInfo('1.1', '属性の動作テスト')]
// #[ClassInfo(version: '1.1', description: '属性の動作テスト')]
class Person {}

$ref = new ReflectionClass(Person::class);
$attrs = $ref->getAttributes(ClassInfo::class);
$info = $attrs[0]->newInstance();
print "バージョン：{$info->version} / {$info->description}";
