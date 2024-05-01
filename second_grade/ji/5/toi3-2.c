/* [2] 23 豊島圭吾 */

#include <stdio.h>
int main(void) {
  char str[100];
  int begin, end;

  printf("文字列を入力せよ: ");
  scanf("%s", str);
  printf("何文字目から何文字目を表示しますか?: ");
  scanf("%d%d", &begin, &end);

  printf("%d文字目から%d文字目の文字列は ", begin, end);
  int i;
  for (i = begin - 1; i < end; i++) {
    printf("%c", str[i]);
  }
  printf("\n");

  return 0;
}

/* 実行結果
文字列を入力せよ: Glamdring
何文字目から何文字目を表示しますか?: 7 9
7文字目から9文字目の文字列は ing
*/
