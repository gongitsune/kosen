<?php
function calendar(int $year, int $month) : void {
  for ($i = 1; $i < 32; $i++) {
    if (checkdate($month, $i, $year)) { print "{$i} &nbsp;"; }
  }
}

print '2024年2月のカレンダ：<br />';
calendar(2024, 2);
