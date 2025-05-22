<?php
function myArrayWalk(array $array, callable $func) : void {
  foreach($array as $key => $value) {
    $func($value, $key);
  }
}

$data = ['杉山', '長田', '杉沼', '和田', '土井'];
myArrayWalk($data, 
  function($value, $key) {
    print "{$key}：{$value}<br />";
  }

  // function(mixed $value, int | string $key) : void {
  //   print "{$key}：{$value}<br />";
  // }
);
