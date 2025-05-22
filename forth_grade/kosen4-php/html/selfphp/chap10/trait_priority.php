<?php 
class MyParent {
  public function hoge() : void {
    print 'MyParent!!';
  }
}

trait MyTrait {
  public function hoge() : void {
    print 'MyTrait!!';
  }
}

class MyChild extends MyParent {
  use MyTrait;
  
  public function hoge() : void {
    print 'MyChild!!';
  }
}

$cls = new MyChild();
$cls->hoge();
