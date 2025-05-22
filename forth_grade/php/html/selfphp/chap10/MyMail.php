<?php
class MyMail {
  public string $to;
  public string $subject;
  public string $message;
  private array $headers = [];

  public function __set(string $name, mixed $value) : void {
    $this->headers[$name] = $value;
  }

  public function __get(string $name) : mixed {
    return $this->headers[$name];
  }

  public function __isset(string $name) : bool {
    return isset($this->headers[$name]);
  }

  public function __unset(string $name) : void {
    unset($this->headers[$name]);
  }

  public function __call(string $name, array $args) : mixed {
    if (count($args) === 0) {
      return $this->headers[$name];
    } else {
      return $this->headers[$name] = $args[0];
    }
  }

  public function send() : void {
    $others = '';
    foreach ($this->headers as $key => $value) {
      $key = str_replace('_', '-', $key);
      $others .= "{$key}: {$value}\n";
    }
    mb_send_mail($this->to, $this->subject, $this->message, $others);
  }
}
