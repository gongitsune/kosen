<?php
class Book {
  public $isbn;
  public $title;
  public $price;
  public $publish;
  public $published;
  private $_rate;

  public function __construct(float $rate) {
    $this->_rate = $rate;
  }
  public function discount(): float {
    return floor($this->price * (1 - $this->_rate));
  }
}
