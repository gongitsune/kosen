<?php
$ref = new ReflectionClass(DateTime::class);
foreach( $ref->getMethods() as $m) {
  print("名前：{$m->getName()}<br />");
  print("戻り値：{$m->getReturnType()}<br />");
  print("引数：");
  foreach($m->getParameters() as $p) {
    print("{$p->getName()}({$p->getType()})　");
  }
  print ("<p>-------------------------</p>");
}
