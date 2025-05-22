<?php
printf('%sは%sです。', 'ニンザブロウ', 'ハムスター');
/*
print '<br />';
print sprintf('%sは%sです。', 'ニンザブロウ', 'ハムスター');
print '<br />';
vprintf('%sは%sです。', ['ニンザブロウ', 'ハムスター']);
print '<br />';
print vsprintf('%sは%sです。', ['ニンザブロウ', 'ハムスター']);
*/
print '<br />';
printf('売上平均（前月比）：%+0-8.3f', 0.198765);
print '<br />';
printf("売上平均（前月比）：%'*10.3e", 0.198765);
print '<br />';
printf('%.6sは%sです。', 'ニンザブロウ', 'ハムスター');
print '<br />';
printf('%2$sは%1$sです。%2$s、大好き！', 'ニンザブロウ', 'ハムスター');

