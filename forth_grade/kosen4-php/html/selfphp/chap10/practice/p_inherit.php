<?php
class MyClass {
  protected string $data;
  public function __construct(string $data) {
    $this->data = $data;
  }
  public function getData(): string {
    return $this->data;
  }
}
