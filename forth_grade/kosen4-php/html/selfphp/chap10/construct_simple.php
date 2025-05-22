<?php
class Person {
  public function __construct(
    public string $firstName,
    public string $lastName
  ) {}

  // public function __construct(
  //   public string $firstName = '権兵衛',
  //   public string $lastName = '名無'
  // ) {}

}

$p = new Person('太郎', '山田');
// $p = new Person();
print "<p>ボクの名前は{$p->lastName}{$p->firstName}です。</p>";
