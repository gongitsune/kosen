<?php
require_once 'Triangle.php';
require_once 'Square.php';

$figs = [];
$figs[] = new Triangle(10, 5);
$figs[] = new Square(10, 5);
$figs[] = new Triangle(3, 2);

foreach ($figs as $fig) {
  if ($fig instanceof IFigure) {
    print '<p>'. get_class($fig) . ':' . $fig->getArea(). '</p>';
  }
}
