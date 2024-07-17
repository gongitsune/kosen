#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char s[100];
  scanf("%s", s);

  int n = strlen(s);
  char *p = (char *)malloc(n * sizeof(char));
  for (int i = 0; i < n; i++) {
    *(p + i) = s[n - i - 1];
  }
  *(p + n) = '\0';

  printf("%s\n", p);

  free(p);
  return 0;
}

/* 実行結果
kanazawa
awazanak
*/
