<?php 
trait MachineTrait {
  private string $starting = 'Starting...Run!';

  public function run() : void {
    print $this->starting;
  } 
}
