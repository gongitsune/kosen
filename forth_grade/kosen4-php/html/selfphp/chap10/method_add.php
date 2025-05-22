<?php
class Person {
  public string $firstName;
  public string $lastName;
  private array $methods = [];

  public function __set(string $name, Closure $method) : void {
    $this->methods[$name] = $method->bindTo($this, self::class);
  }

  public function __call(string $name, array $args) : mixed {
    if (!array_key_exists($name, $this->methods)) {
      throw new Exception("${name} method is not existed.");
    }
    return $this->methods[$name](...$args);
  }
}

$p = new Person();
$p->lastName = '山田';
$p->firstName = '太郎';
$p->bye = function(): void {
  print "{$this->lastName}{$this->firstName}さん、さようなら！";
};
$p->bye();
