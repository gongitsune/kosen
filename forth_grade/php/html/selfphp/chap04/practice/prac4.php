<?php
$language = 'Python';
switch ($language) {
  case 'Python' :
  case 'PHP' :
  case 'Ruby' :
    print 'インタプリター言語';
    break;
  case 'C#' :
  case 'Java' :
    print 'コンパイル言語';
    break;
}
