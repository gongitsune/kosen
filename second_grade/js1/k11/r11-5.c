/* 23 豊島圭吾
 * 第11回課題プログラム5
 */

#include <stdio.h>

int main(void) {
  char s1[100], s2[100];
  printf("string1 = ");
  scanf("%s", s1);
  printf("string2 = ");
  scanf("%s", s2);

  int i = 0, j = 0;
  while (s1[i] != '\0') {
    i++;
  }
  while (s2[j] != '\0') {
    s1[i + j] = s2[j];
    j++;
  }

  printf("string1 = %s\n", s1);
  return 0;
}

/* 実行結果
string1 = kagawa
string2 = kosen
string1 = kagawakosen
*/
