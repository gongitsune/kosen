<?php
function total(float ...$args): float {
  $result = 0;
  foreach ($args as $arg) {
    $result += $arg;
  }
  return $result;
}

// 1個以上の引数を渡す悪いパターン
// function total(float ...$args): float {
//   if (count($args) === 0) {
//     throw new Exception('引数は1個以上指定してください');
//   }
//   $result = 0;
//   foreach ($args as $arg) {
//     $result += $arg;
//   }
//   return $result;
// }

// 1個以上の引数を渡す良いパターン
// function total(float $init, float ...$args): float {
//   $result = $init;
//   foreach ($args as $arg) {
//     $result += $arg;
//   }
//   return $result;
// }

print total(7, 3, 10);
print '<br />';
print total(11, -5, 4, 88);
print '<br />';
// print total();
