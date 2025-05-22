<?php
class MyClass {
  public function __get($name) {
    print "{$name}プロパティは存在しません。";
  }
}
$cls = new MyClass();
$str = $cls->nothing;
