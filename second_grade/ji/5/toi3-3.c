/* [3] 23 豊島圭吾 */

#include <stdio.h>

int main(void) {
  char str[100], first[50], second[50];

  scanf("%s", str);
  printf("%sってなんだ?\n", str);

  int i = 0, f = 0, s = 0;
  while (str[i] != '\0') {
    if (i % 2 == 0) {
      first[f] = str[i];
      f++;
    } else {
      second[s] = str[i];
      s++;
    }

    i++;
  }
  first[f + 1] = '\0';
  second[s + 1] = '\0';

  printf("%s と %s のことでした。\n", first, second);

  return 0;
}

/* 実行結果
reelienpdheaenrt
reelienpdheaenrtってなんだ?
reindeer と elephant のことでした。
*/
