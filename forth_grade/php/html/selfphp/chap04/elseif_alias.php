<?php
$x = 35;
if ($x > 20) :
  print '変数$xは20より大きいです。';
elseif ($x > 10) :
  print '変数$xは10より大きく、20以下です。';
else :
  print '変数$xは10以下です。';
endif;
