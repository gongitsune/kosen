<?php
require_once 'Figure.php';

class Square extends Figure {
  public function getArea(): float {
    return $this->width * $this->height;
  }
}
