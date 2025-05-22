<?php
function myArrayWalk(array $array, callable $func) : void {
  foreach ($array as $key => $value) {
    $func($value, $key);
  }
}
function showItem(mixed $value, int | string $key) :void {
  print "{$key}：{$value}<br />";
}

$data = ['杉山', '長田', '杉沼', '和田', '土井'];
myArrayWalk($data, 'showItem');
