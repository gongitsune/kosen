<?php
$str = '仕事用はwings@example.comです。';
if(preg_match("/
              [a-z0-9.!#$%&'*+\/=?^_{|}~-]+ # local
              @                             # delimiter
              [a-z0-9-]+(\.[a-z0-9-]+)*     # domain
              /x", $str, $data)) {
  print "Mail：{$data[0]}";
}
