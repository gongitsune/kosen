<?php
class Person {
  public string $firstName;
  public string $lastName;

  public function __construct ($firstName, $lastName) {
    $this->firstName = $firstName;
    $this->lastName = $lastName;
  }

  public function show() {
    print "<p>ボクの名前は{$this->lastName}{$this->firstName}です。</p>";
  }

  public function __toString() {
    return $this->lastName.$this->firstName;
  }
}
