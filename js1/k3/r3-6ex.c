/* 23 豊島圭吾
 * 第3回レポート プログラム6
 */

#include <stdio.h>

// 恐らくgcc/cc以外では動かない漸化式定義用のマクロ
#define EXP(BODY)                                                              \
  ({                                                                           \
    int __lambda_funcion__(int a, int n) { BODY; }                             \
    __lambda_funcion__;                                                        \
  })

/**
 * @brief 数列を表示
 *
 * @param[in] num 数列の番号
 * @param[in] init 初項
 * @param[in] n 項数
 * @param[in] exp 漸化式
 */
void print_seq(int num, int init, int n, int (*exp)(int, int)) {
  printf("(%d)", num);
  int i, a;
  a = init;
  for (i = 0; i < n; i++) {
    printf(" %d", a);
    a = exp(a, i); // 更新
  }
  printf("\n");
}

int main(void) {
  print_seq(1, 1, 10, EXP({ return a + 2; }));
  print_seq(2, 0, 10, EXP({ return a + 2 + n * 2; }));
  print_seq(3, 1, 10, EXP({ return a + 3 + n * 2; }));
  print_seq(4, 1, 10, EXP({ return a + 6 + n * 4; }));

  return 0;
}

/* 実行結果
(1) 1 3 5 7 9 11 13 15 17 19
(2) 0 2 6 12 20 30 42 56 72 90
(3) 1 4 9 16 25 36 49 64 81 100
(4) 1 7 17 31 49 71 97 127 161 199
 */
