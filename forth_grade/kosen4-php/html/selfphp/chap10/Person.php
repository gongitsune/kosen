<?php
class Person {
  public string $firstName;
  public string $lastName;

  public function __construct (string $firstName, string $lastName) {
    $this->firstName = $firstName;
    $this->lastName = $lastName;
  }

  public function show() : void {
    print "<p>ボクの名前は{$this->lastName}{$this->firstName}です。</p>";
  }

  public function __toString() : string {
    return $this->lastName.$this->firstName;
  }

  public function __debugInfo() : array {
    return [
        '名' => $this->firstName,
        '性' => $this->lastName
    ];
  }
}
