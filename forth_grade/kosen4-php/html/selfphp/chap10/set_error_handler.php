<?php
set_error_handler(
  function ($errno, $errstr, $file, $line) {
    // エラーコードがerror_reportingに含まれない場合はなにもしない
    if (!(error_reporting() & $errno)) { return; }
    // それ以外ではErrorExceptionとしてスロー
    throw new ErrorException($errstr, 0, $errno, $file, $line);
  }
);
 
try {  
  // わざとエラーを発生
  trigger_error('カスタムエラー', E_USER_ERROR);
} catch (ErrorException $e) {
  print "エラーメッセージ：{$e->getMessage()}";
}
