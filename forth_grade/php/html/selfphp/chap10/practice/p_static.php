<?php
class MyClass {
  public static function square(float $width, float $height) : float {
    return $width * $height;
  }
}
print MyClass::square(10, 5);

