<?php
$data = 10;
print match($data) {
  hoge() => 'hogeがマッチ',
  foo() => 'fooがマッチ',
  bar() => 'barがマッチ',
};

function hoge() {
  return 1;
}
function foo() {
  return 10;
}
function bar() {
  return 100;
}
