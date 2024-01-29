/* 23 豊島圭吾
 * 第14回レポート プログラム4
 */

#include <stdio.h>

int str2int(char *s);

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("使用方法: ./r14-4 number number\n");
    return 1;
  }

  printf("%d\n", str2int(argv[1]) + str2int(argv[2]));
  return 0;
}

int str2int(char *s) {
  int i = 0, sum = 0;
  while (s[i] != '\0') {
    sum = sum * 10 + (s[i] - '0');

    i++;
  }
  return sum;
}

/* 実行結果
$ ./r14-4 752 64
816
*/
