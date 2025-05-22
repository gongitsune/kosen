<?php
$now = new DateTime();
print $now->format('Y年m月d日（D） g:i:s a');
print '<br />';
print $now->format('当月の日数：t日');
print '<br />';
print $now->format('L') ? '閏年です' : '閏年ではありません';
print '<br />';
print $now->format(DateTime::RSS);
