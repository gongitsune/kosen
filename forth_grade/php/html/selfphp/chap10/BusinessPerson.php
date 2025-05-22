<?php
require_once 'Person.php';

class BusinessPerson extends Person {
// final class BusinessPerson extends Person {
  public function work () : void{
  // public final function work() : void {
    print "<p>{$this->lastName}{$this->firstName}は働いています。</p>";
  }
}
