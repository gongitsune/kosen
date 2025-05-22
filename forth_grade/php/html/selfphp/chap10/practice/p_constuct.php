<?php
class Book {
  public function __construct(
    public string $title,
    public int $price
  ) {}
}

$b = new Book('独習Python', 3000);
print "<p>{$b->title}は{$b->price}円です。</p>";
