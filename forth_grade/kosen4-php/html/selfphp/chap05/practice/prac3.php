<?php
$file = fopen('sample.dat', 'r') or die('Cannot open file!');
flock($file, LOCK_SH);
while ($line = fgets($file, 1024)) {
  if(preg_match('|http(s)?://([\w-]+\.)+[\w-]+(/[\w ./?%&=-]*)?|i', $line, $data)){
    print $data[0] . '<br/>';
  }
}
flock($file, LOCK_UN);
fclose($file);
