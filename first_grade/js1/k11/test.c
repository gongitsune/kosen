#include <stdio.h>

void replace(char *source, int start, int len, char *target);

int main(void) {
  char s[100] = "HelloWorld";
  printf("source -> %s\n", s);
  replace(s, 2, 3, "----");
  printf("replaced -> %s\n", s);
  return 0;
}

void replace(char *source, int start, int len, char *target) {
  int target_len = 0;
  while (target[target_len] != '\0') {
    target_len++;
  }

  int i = 0;
  if (target_len < len) {
    int diff = len - target_len;
    int idx;
    while (source[idx = start + target_len + i + diff] != '\0') {
      source[idx - diff] = source[idx];
      i++;
    }
    source[idx - diff] = '\0';
  } else if (target_len > len) {
    int diff = target_len - len;
    int idx = diff;

    char tmp;
    while (source[start] != '\0') {
      for (i = 0; i < diff; i++) {
        tmp = source[start + i];
        source[start + i] = source[start + i + idx];
        source[start + i + idx] = tmp;
      }

      idx += diff;
    }
    source[start + idx] = '\0';
  }

  for (i = 0; i < target_len; i++) {
    source[start + i] = target[i];
  }
}
