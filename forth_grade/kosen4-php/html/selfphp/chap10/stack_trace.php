<pre>
<?php
function hoge() {
  foo();
}

function foo() {
  bar();
}

function bar() {
  throw new Exception('例外発生！');
}

hoge();
