<?php
//test();
$area = getTriangleArea(8, 10);
print "三角形の面積は{$area}です。";

function test() {
  function getTriangleArea(float $base, float $height): float {
    return $base * $height / 2;
  }
}

//if (function_exists('getTriangleArea')) {
//  print 'getTriangleArea関数は定義済みです。'; 
//}
