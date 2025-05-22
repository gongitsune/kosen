<?php
class MyUtil {
  public static function getContents(string $url): string {
    if (!preg_match('|http(s)?://([\w-]+\.)+[\w-]+(/[\w ./?%&=-]*)?|', $url)) {
      throw new InvalidArgumentException('不正なURLの形式です。');
    }
    $data = @file_get_contents($url);
    if (!$data) {
      throw new RuntimeException('指定されたURLが見つかりません。');
    }
    return $data;
  }
}

try {
  print MyUtil::getContents('https://wings.msn.to/nothing/');
} catch (RuntimeException | InvalidArgumentException $e) {
  print "エラーメッセージ：{$e->getMessage()}";
}
