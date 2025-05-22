<?php
function diamond(float $diagonal1, float $diagonal2): float {
  return $diagonal1 * $diagonal2 / 2;
}
print '菱形の面積は' . diamond(5, 2) . 'です。';
