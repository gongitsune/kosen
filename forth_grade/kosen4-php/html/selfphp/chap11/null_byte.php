<?php
function sanitizeNull(array $data) : array {
  return str_replace("\0", "", $data);
}

$_GET = sanitizeNull($_GET);
$_POST = sanitizeNull($_POST);
$_COOKIE = sanitizeNull($_COOKIE);

print $_GET['path'];
