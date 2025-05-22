<?php
interface MyAppException  { }

class MyInputException extends RuntimeException implements MyAppException {}

class MyOutputException extends RuntimeException implements MyAppException {}
