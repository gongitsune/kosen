<?php
function getTriangleArea($base, $height) {
  return $base * $height / 2;
}

$area = getTriangleArea(8, 10);
print "三角形の面積は{$area}です。";
