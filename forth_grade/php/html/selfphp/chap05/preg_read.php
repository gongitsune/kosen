<?php
function showMatch($ptn, $input){
  if(preg_match_all($ptn, $input, $data)) {
    foreach ($data as $items) {
      foreach ($items as $item) {
        print "{$item} <br />";
      }
    }
  } else {
    print 'マッチしません。<br />';
  }
  print '<hr />';
}

$re1 = '/いろ(?=はに)/';
$re2 = '/いろ(?!はに)/';
$re3 = '/(?<=。)いろ/';
$re4 = '/(?<!。)いろ/';
$msg1 = 'いろはにほへと';
$msg2 = 'いろものですね。いろいろと';

showMatch($re1, $msg1);
showMatch($re1, $msg2);
showMatch($re2, $msg1);
showMatch($re2, $msg2);
showMatch($re3, $msg1);
showMatch($re3, $msg2);
showMatch($re4, $msg1);
showMatch($re4, $msg2);
