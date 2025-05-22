<?php
$str = '彼の電話番号は0399-88-9785、私のは0398-99-1234です。郵便番号はどちらも687-1109です。';
if(preg_match_all('/(?P<area>[0-9]{2,4})-(?P<city>[0-9]{2,4})-(?P<local>[0-9]{4})/', $str, $data, PREG_SET_ORDER)) {
  foreach ($data as $item) {
    print "電話番号：{$item[0]} <br />";
    print "市外局番：{$item['area']} <br />";
    print "市内局番：{$item['city']} <br />";
    print "加入者番号：{$item['local']} <hr />";
  }
}
