<?php
require_once 'MachineTrait.php';

class Fax {
  use MachineTrait;

  public function send() : void {
    print 'sending Fax...sended!';
  }
}

$fx = new Fax();
$fx->run();
print '<br />';
$fx->send();
