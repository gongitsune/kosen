<?php 
function getTriangleArea(float $base, float $height): float {
  return $base * $height / 2;
}

// print getTriangleArea([10, 5]);
print getTriangleArea(...[10, 5]);
