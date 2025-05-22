<?php
class MyParent {
  public static function show() {
    print __CLASS__;
  }

  public static function staticTest() {
    // self::show();
    static::show();
  }
}

class MyChild extends MyParent {
  public static function show() {
    print __CLASS__;
 }
}

MyChild::staticTest();
