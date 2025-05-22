<?php
class PrimeIterator implements Iterator {
  private int $key;
  private int $current;
  private int $max;

  public function __construct(int $max) {
    $this->rewind();
    $this->max = $max;
  }

  public function next() : void {
    $this->key += 1;
    while(true) {
      $this->current++;
      if ($this->isPrime($this->current)) {
        return;
      }
    }
  }

  public function key() : mixed {
    return $this->key;
  }


  public function current() : mixed {
    return $this->current;
  }

  public function rewind(): void {
    $this->key = 0;
    $this->current = 2;
  }


  public function valid() : bool {
    return $this->current() <= $this->max;
  }


  private function isPrime(int $value) : bool {
    $prime = true;
    for ($i = 2; $i <= floor(sqrt($value)); $i++) {
      if ($value % $i === 0) {
        $prime = false;
        break;
      }
    }
    return $prime;
  }

}

$pr = new PrimeIterator(100);
foreach ($pr as $p) {
  print "{$p}<br />";
}
