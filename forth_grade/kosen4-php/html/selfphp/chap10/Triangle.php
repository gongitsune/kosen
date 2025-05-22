<?php
require_once 'Figure.php';

class Triangle extends Figure {
  public function getArea(): float {
    return $this->width * $this->height / 2;
  }
}
