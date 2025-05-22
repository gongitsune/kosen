<?php
function myGen() {
  yield 'あいうえお';
  yield 'かきくけこ';
  yield 'さしすせそ';
}

foreach(myGen() as $value) {
  print $value.'<br />';
} 
