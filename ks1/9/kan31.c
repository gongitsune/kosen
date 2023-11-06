/* 23 豊島圭吾
 * 第9回レポート プログラム6
 */

#include <stdio.h>

void print_pattern2(void);

int main(void) {
  int i;
  for (i = 0; i < 5; i++) {
    print_pattern2();
  }
}

void print_pattern2(void) { printf("***\n"); }

/* 実行結果 23 豊島圭吾
***
***
***
***
***
*/
