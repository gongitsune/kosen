<?php
$data = ['高江', '掛谷', '日尾', '薄井', '和田'];
array_walk($data,
  function(&$value) {
    $value = "New{$value}";
  }
);
print_r($data);
