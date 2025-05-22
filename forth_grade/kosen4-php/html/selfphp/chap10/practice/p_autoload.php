<?php
spl_autoload_register(function($name){
  require_once "php_{$name}.class.php";
});
