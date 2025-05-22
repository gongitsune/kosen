<?php
function readFiles(string ...$files) {
  foreach($files as $file) {
    yield from readLines($file);
  }
}

function readLines(string $path) {
  $file = fopen($path, 'rb') or die('ファイルが見つかりません');
  while($line = fgets($file, 1024)) {
    yield $line;
  }
  fclose($file);
}

foreach(readFiles('sample.dat', 'sample2.dat') as $line) {
  print $line.'<br />';
}
