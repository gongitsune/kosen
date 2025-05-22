<?php
class MySingleton {
  private static self $instance;

  private function __construct() {}

  public static function getInstance() : self {
    if (!isset(self::$instance)) {
      self::$instance = new MySingleton();
    }
    return self::$instance;
  }
}

$c1 = MySingleton::getInstance();
$c2 = MySingleton::getInstance();
print var_dump($c1 === $c2);
