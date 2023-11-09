/* 23 豊島圭吾
 * 第11回課題プログラム4
 */

#include <stdio.h>

int main(void) {
  char s1[100], s2[100];
  printf("string2 = ");
  scanf("%s", s2);

  int i = 0;
  while (s2[i] != '\0') {
    s1[i] = s2[i];
    i++;
  }
  s1[i] = '\0';

  printf("string1 = %s\n", s1);
  return 0;
}

/* 実行結果
string2 = takuma
string1 = takuma
*/
