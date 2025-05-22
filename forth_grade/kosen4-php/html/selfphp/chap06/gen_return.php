<?php
function readLines(string $path) {
  $i = 0;
  $file = fopen($path, 'rb') or die('ファイルが見つかりません');
  while($line = fgets($file, 1024)) {
    $i++;
    yield $line;
  }
  fclose($file);
  return $i;
}

$gen = readLines('sample.dat');
foreach($gen as $line) {
  print $line.'<br />';
}
print "{$gen->getReturn()}行ありました。";
