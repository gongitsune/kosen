<?php
require_once 'Person.php';

final class Book {
  private string $title;
  private Person $author;

  public function __construct(string $title, Person $author) {
    $this->title = $title;
    $this->author = clone $author;
  }

  public function getTitle(): string {
    return $this->title;
  }

  public function getAuthor(): Person {
    return clone $this->author;
  }

  public function withTitle(string $title): self {
    $b = clone $this;
    $b->title = $title;
    return $b;
  }

  public function __set(string $name, mixed $value): void {
    throw new Exception('Unknown property.');
  }

  public function __clone(): void {	
    $this->author = clone $this->author;
  }
}
