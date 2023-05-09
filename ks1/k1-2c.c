/* 23 豊島圭吾
 * 第2回レポート プログラム3
 */

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);

  int c = a * a * a * 1000000;
  int d = b * b * b;
  printf("水槽の一辺の長さ   = %d m\n", a);
  printf("水槽の容量         = %d cc\n", c);
  printf("バケツの一辺の長さ = %d cm\n", b);
  printf("バケツの容量       = %d cc\n", d);
  printf("バケツの個数       = %d 杯\n", c / d);
  printf("最後のバケツの水量 = %d cc\n", c - d * (c / d));
  return 0;
}

/* 実行結果 豊島圭吾
2 30
水槽の一辺の長さ   = 2 m
水槽の容量         = 8000000 cc
バケツの一辺の長さ = 30 cm
バケツの容量       = 27000 cc
バケツの個数       = 296 杯
最後のバケツの水量 = 8000 cc
 */
