/* 23 豊島圭吾
 * 第14回レポート プログラム3
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("使用方法: ./r14-3 number number\n");
    return 1;
  }

  printf("%d\n", (argv[1][0] - '0') + (argv[2][0] - '0'));
  return 0;
}

/* 実行結果
$ ./r14-3 7 6
13
*/
