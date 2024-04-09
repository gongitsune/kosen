/* 23 豊島圭吾
 * 第11回課題プログラム2
 */

#include <stdio.h>
#include <string.h>

int main(void) {
  char s[100], res[100];
  int max_length = 0;
  while (scanf("%s", s) != EOF) {
    int cnt = strlen(s);
    if (cnt > max_length) {
      max_length = cnt;
      strcpy(res, s);
    }
  }

  printf("最も長い単語 = %s\n", res);
  printf("その文字数 = %d\n", max_length);

  return 0;
}

/* 実行結果
最も長い単語 = embroidery-frame
その文字数 = 16
*/
