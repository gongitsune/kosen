<?php 
$keys = [ '十', '百', '千', '万', '億', '兆', '京', '垓', '𥝱', '穰', '溝',
  '澗', '正', '載', '極', '恒河沙', '阿僧祇', '那由他', '不可思議', '無量大数' ];
$data = [ '那由他', '京', '垓', '億', '無量大数' ];

usort($data, function($a, $b) use ($keys) {
    return array_search($a, $keys) <=> array_search($b, $keys); 
});

print_r($data);
