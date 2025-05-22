<?php 
$data = ['PHP', 'JavaScript', 'PHP', 'Java', 'C#', '15'];
if(!array_search('PHP', $data)) {
//if(array_search('PHP', $data) === false) {
//if(!in_array('PHP', $data)) {
  print '見つかりませんでした';
}
