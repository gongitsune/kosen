<?php
class TriangleFigure {
  public float $base;
  public float $height;

  public function __construct() {
    $this->base = 1;
    $this->height = 1;
  }

  public function getArea(): float {
    return $this->base * $this->height / 2;
  }
}
