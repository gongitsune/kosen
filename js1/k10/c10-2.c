/* 23 豊島圭吾
 * 第10回挑戦的課題 プログラム2
 */

#include <stdio.h>
#include <stdlib.h>

#define N 1

int main(void) {
  int is_head = 0;
  char c;
  int i;

  printf("(平文): ");
  while (scanf("%c", &c) != EOF) {
    if (is_head == 0) {
      printf("(暗号文): ");
      is_head = 1;
    }

    if (c >= 0x61 && c <= 0x7A)
      printf("%c", (c + N - 0x61) % 26 + 0x61);
    else if (c >= 0x41 && c <= 0x5A)
      printf("%c", (c + N - 0x41) % 26 + 0x41);
    else if (c >= 0x30 && c <= 0x39)
      printf("%c", (c + N - 0x30) % 10 + 0x30);
    else
      printf("%c", c);

    if (c == '\n') {

      printf("\n");
      printf("(平文): ");

      is_head = 0;
    }
  }

  return 0;
}

/* 実行結果
(平文): My phone number is 83-8599.
(暗号文): Nz qipof ovncfs jt 94-9600.
*/
