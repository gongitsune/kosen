<?php
$fl = $_GET['path'] ?? 'default.jpg';

// if (!preg_match('/\.txt$/', $fl)) { die('不正な要求です。'); }

// $flag = false;
// $dir = new DirectoryIterator('./doc/');
// foreach ($dir as $file) {
//   if ($file->isFile() && $file->getFileName() === $fl) {
//     $fl = $file->getFileName();
//     $flag = true;
//     break;
//   }
// }
// if (!$flag) { die('不正な要求です。'); }

header('Content-Type: application/octet-stream');
header('Content-Disposition: attachment; filename = "'.$fl.'"');
print file_get_contents("./doc/{$fl}");
