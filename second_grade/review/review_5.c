#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n, p;
  printf("n = ");
  scanf("%d", &n);
  printf("p = ");
  scanf("%d", &p);

  int *cnts = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    cnts[i] = 0;
  }

  int t = 0, i = 0, step = 0;
  while (p != 0 || t != 1) {
    if (p != 0) {
      p--;
      if (cnts[i] == 0)
        t++;
      cnts[i]++;
    } else if (cnts[i] != 0) {
      p += cnts[i];
      t--;
      cnts[i] = 0;
    }
    i = (i + 1) % n;
    step++;
  }
  free(cnts);

  printf("%d番が勝者\n", (i == 0 ? n : i) - 1);
  printf("%dステップ目で終了\n", step);
  return 0;
}

/*
n = 3
p = 3
0番が勝者
13ステップ目で終了

n = 3
p = 50
1番が勝者
9701ステップ目で終了

n = 10
p = 29
5番が勝者
929006ステップ目で終了

n = 31
p = 32
30番が勝者
992ステップ目で終了

n = 50
p = 2
1番が勝者
52ステップ目で終了

n = 50
p = 50
13番が勝者
3214ステップ目で終了
*/
