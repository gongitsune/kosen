/* 23 豊島圭吾
 * 第11回挑戦的課題プログラム1
 */

#include <stdio.h>

int main(void) {
  char s1[100], s2[100];
  int n;
  printf("string1 = ");
  scanf("%s", s1);
  printf("string2 = ");
  scanf("%s", s2);
  printf("n = ");
  scanf("%d", &n);

  int i = 0, j = 0;
  while (s1[i] != '\0') {
    i++;
  }
  while (s2[j] != '\0' && j < n) {
    s1[i + j] = s2[j];
    j++;
  }

  s1[i + j] = '\0';
  printf("string1 = %s\n", s1);
  return 0;
}

/* 実行結果
string1 = Takuma
string2 = Denpakousen
n = 5
string1 = TakumaDenpa

string1 = Takuma
string2 = Denpakousen
n = 50
string1 = TakumaDenpakousen
*/
