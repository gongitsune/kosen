<?php
require '../../vendor/autoload.php';

$cli = new GuzzleHttp\Client([
  'base_uri' => 'https://wings.msn.to',
]);
$res = $cli->get('/tmp/books.json');
$obj = json_decode($res->getBody());
?>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Guzzle</title>
</head>
<body>
<ul>
<?php
foreach ($obj->books as $b) {
  print "<li>{$b->title}（{$b->published}・{$b->price}円）</li>";
}
?>
</ul>
</body>
</html>
