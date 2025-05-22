<?php
$books = [
  ['独習Python', 3000],
  ['独習Java 新版', 2980],
  ['独習C# 新版', 3600],
];
foreach($books as [$title, $price]) {
  print "{$title}（{$price}円）<br />";
}
