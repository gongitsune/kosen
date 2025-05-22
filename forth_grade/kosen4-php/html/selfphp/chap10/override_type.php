<?php
class MyParent {}
class MyChild extends MyParent {}

class MyMain {
  public function hoge(MyChild $p) : MyParent {
    return new MyParent();
  }
}

class MySub extends MyMain {
  public function hoge(MyParent $p) : MyChild {
    return new MyParent();
  }
}
