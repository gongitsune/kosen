<?php
require_once 'Person.php';
require_once 'FriendList.php';

$list = new FriendList();
$list->add(new Person('太郎', '山田'));
$list->add(new Person('奈美', '掛谷'));
$list->add(new Person('賢', '高江'));

foreach ($list as $value) {
  print $value->show();
}
