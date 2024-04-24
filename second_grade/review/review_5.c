#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int n, p;
  printf("n = ");
  scanf("%d", &n);
  printf("p = ");
  scanf("%d", &p);

  int cnts[n];
  for (int i = 0; i < n; i++) {
    cnts[i] = 0;
  }

  int i = 0, step = 0, bowl = p;
  while (true) {
    step++;
    if (bowl != 0) {
      bowl--;
      cnts[i]++;
      if (cnts[i] == p) {
        break;
      }
    } else if (cnts[i] != 0) {
      bowl += cnts[i];
      cnts[i] = 0;
    }
    i = (i + 1) % n;
  }

  printf("%d番が勝者\n", i);
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
