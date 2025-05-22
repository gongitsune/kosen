<?php
set_exception_handler(function(Throwable $e) {
  require_once 'my_error.html';
});

throw new Exception('MyException');
