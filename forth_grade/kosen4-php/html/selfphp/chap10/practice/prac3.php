<?php
abstract class Figure {
  protected float $width;
  protected float $height;
  public function __construct(float $width, float $height) {
    $this->width = $width;
    $this->height = $height;
  }
  protected abstract function getArea() : float;
}

class Triangle extends Figure {
  public final function getArea() : float {
    return $this->width * $this->height / 2;
  }
}

class Square extends Figure {
  public final function getArea() : float {
    return $this->width * $this->height;
  }
}

$tri = new Triangle(10, 5);
$sqr = new Square(10, 5);
print "三角形の面積は{$tri->getArea()}です。<br />";
print "四角形の面積は{$sqr->getArea()}です。";
