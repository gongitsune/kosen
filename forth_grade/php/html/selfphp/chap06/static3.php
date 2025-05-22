<?php
function checkStatic() : void {
  static $x = 0;
  $x++;
  print "unset前：{$x} ";
  unset($x);
  $x = 13;
  print "unset後：{$x}<br />";
}

checkStatic();
checkStatic();
