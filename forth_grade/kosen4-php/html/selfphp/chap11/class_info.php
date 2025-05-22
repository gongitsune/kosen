<?php
#[Attribute(Attribute::TARGET_CLASS)]
class ClassInfo {
  public function __construct(
    public string $version = '1.0',
    public string $description = '') {}
}
