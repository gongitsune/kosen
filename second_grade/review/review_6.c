#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 4
#define DEBUG

int randint(int min, int max) { return rand() % (max - min) + min; }

void shuffle(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    int j = randint(i, n);
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
  }
}

int main(void) {
  srand((unsigned)time(NULL));

  // ランダムなN桁の数字を生成
  int nums[9];
  for (int i = 1; i < 10; i++) {
    nums[i - 1] = i;
  }
  shuffle(nums, 9);

  char num_str[N + 1];
  num_str[N] = '\0';
  for (int i = 0; i < N; i++) {
    num_str[i] = nums[i] + '0';
  }

  // デバッグ用
#ifdef DEBUG
  printf("num_str = %s\n", num_str);
#endif /* ifdef DEBUG */

  int step = 0;

  while (true) {
    char input[N + 1];

    printf("%d回目=", step + 1);
    scanf("%s", input);

    // 入力がN桁でない場合
    if (strlen(input) != N) {
      printf("Numbers must be %d digits\n", N);
      continue;
    }
    // ステップを進める
    step++;

    // ヒットとブローを数える
    int hit = 0, blow = 0;
    for (int i = 0; i < N; i++) {
      if (input[i] == num_str[i]) {
        hit++;
      } else {
        for (int j = 0; j < N; j++) {
          if (input[i] == num_str[j]) {
            blow++;
          }
        }
      }
    }

    if (hit == N) {
      printf("BINGO!\n");
      break;
    }
    printf("HIT:%d BLOW:%d\n", hit, blow);
  }

  return 0;
}

/* 実行結果
1回目=1234
HIT:0 BLOW:0
2回目=5678
HIT:3 BLOW:0
3回目=9567
HIT:0 BLOW:4
4回目=5679
BINGO!
*/
