<?php
// header('Location: http://localhost/selfphp/chap08/req_headers.php');
header('Location: http://'.$_SERVER['HTTP_HOST'].dirname($_SERVER['PHP_SELF']).'/req_headers.php');
