<?php
namespace wings\selfphp;

/**
 * メンバーに関する情報を管理する。
 *
 * @author WINGSプロジェクト <wings@example.com>
 * @version  1.0
 * @license GPL
 */
class Person {
  /**
   * 名前
   */
  private string $name;
  /**
   * 年齢
   */
  private int $age;

  /**
   * 名前／年齢でオブジェクトを初期化する。
   * @param string $name 名前
   * @param int $age 年齢
   * @throws InvalidArgumentException 年齢が負数の場合
   */
  public function __construct (string $name, int $age) {}

  /**
   * @deprecated __toStringを代わりに利用してください。
   */
  public function show(): string {}

  /**
   * Personクラスの内容を文字列化する。
   * @return string 「名前／年齢」の形式で整形した文字列
  */
  public function __toString(): string  {}
}