<?php 
trait AccessorTrait {
  public function __set(string $name, mixed $value) : void { 
    if ($this->props[$name]) {
      $this->props[$name] = $value;
    } else {
      throw new Exception("{$name}プロパティは存在しません。");
    }
  }

  public function __get(string $name) : mixed {
    if ($this->props[$name]) {
        return $this->props[$name];
    } else {
        throw new Exception("{$name}プロパティは存在しません。");
    }
  }
}

class MyTriangle {
  use AccessorTrait;
  
  private $props = [
    'base' => 1,
    'height' => 1
  ];
  
  public function getArea(): float {
    return $this->base * $this->height / 2;
  }
}

$cls = new MyTriangle();
$cls->base = 10;
$cls->height = 5;
print $cls->getArea();

// $cls->hoge = 'foo';
