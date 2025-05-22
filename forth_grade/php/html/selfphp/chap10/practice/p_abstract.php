<?php
abstract class Animal {
  public abstract function outputVoice(): string;
}

class Cat extends Animal {
  public final function outputVoice(): string {
    return 'ニャァ';
  }
}
class Dog extends Animal {
  public final function outputVoice(): string {
    return 'バゥ';
  }
}

$cat = new Cat();
print $cat->outputVoice() . '<br />';
$dog = new Dog();
print $dog->outputVoice() . '<br />';
