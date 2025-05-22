<?php
$tags = '<p><strong>WINGS</strong>サイト<a href="index.html"><img src="wings.jpg" /></a></p>';
if(preg_match_all('/<.+>/', $tags, $data, PREG_SET_ORDER)) {
  foreach ($data as $item) {
    print htmlspecialchars($item[0]).'<br />';
  }
}

/*
if(preg_match_all('/<.+?>/', $tags, $data, PREG_SET_ORDER)) {
  foreach ($data as $item) {
    print htmlspecialchars($item[0]).'<br />';
  }
}
*/
