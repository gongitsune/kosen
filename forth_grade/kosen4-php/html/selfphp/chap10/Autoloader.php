<?php
spl_autoload_register(function(string $name) : void {
  require_once "{$name}.php";
});
