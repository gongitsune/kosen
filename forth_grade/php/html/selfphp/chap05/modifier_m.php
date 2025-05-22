<?php
$str = "7人の小人と白雪姫\n101匹ワンちゃん";
// if (preg_match_all('/^[0-9]{1,}/', $str, $data)) {
if (preg_match_all('/^[0-9]{1,}/m', $str, $data)) {
  foreach ($data[0] as $item) {
    print "マッチング結果：{$item}<br />";
  }
}
