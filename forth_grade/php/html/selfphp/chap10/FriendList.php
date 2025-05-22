<?php
class FriendList implements IteratorAggregate {
  public string $version = '1.0.0';
  public string $name = '友人リスト';
  private array $list = [];

  public function getIterator(): Traversable {
    return new ArrayIterator($this->list);
  }

   public function add(Person $p) : void {
    $this->list[] = $p;
  }

/*
  public function __clone() : void {
    foreach ($this->list as &$value) {
      $value = clone $value;
    }
  }
*/

  public function __invoke(int $index) : mixed {
    return $this->list[$index];
  }
}
