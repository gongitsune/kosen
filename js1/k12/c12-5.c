/* 23 豊島圭吾
 * 第12回挑戦的課題 プログラム5
 */

#include <stdio.h>

int mygetline(char *line);
int search(char *s1, char *s2);

int main(void) {
  char line[3000];

  int sum = 0, i = 0, c;
  while (mygetline(line) != EOF) {
    c = search(line, "snow");

    i++;
    if (c == 0)
      continue;

    printf("line %d: %d 個発見\n", i, c);
    sum += c;
  }

  printf("全部で %d 個含まれています\n", sum);

  return 0;
}

int mygetline(char *line) {
  int i = 0;
  char c;
  while ((c = getchar()) != '\n' && c != EOF) {
    line[i] = c;
    i++;
  }
  line[i] = '\0';
  return c;
}

int search(char *s1, char *s2) {
  int i = 0, j = 0, c = 0;

  // 探す文字がsnowだから, 全ての場合を探索しない
  while (s1[i] != '\0') {
    if (s1[i] == s2[j]) {
      j++;
      if (s2[j] == '\0') {
        c++;
        j = 0;
      }
    } else {
      j = 0;
    }
    i++;
  }
  return c;
}

/*
line 3: 5 個発見
line 62: 1 個発見
line 71: 1 個発見
全部で 7 個含まれています
*/
