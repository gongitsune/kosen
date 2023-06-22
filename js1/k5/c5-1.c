/* 23 豊島圭吾
 * 第5回挑戦的課題 プログラム1
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int count_bingo(int *card, int size, bool *bingo_num) {
  int x, y, cnt = 0;
  // 縦
  for (x = 0; x < size; x++) {
    bool is_bingo = true;
    for (y = 0; y < size; y++) {
      if (card[y * size + x] != -1) {
        is_bingo = false;
        break;
      }
    }
    if (is_bingo) {
      cnt++;
      for (y = 0; y < size; y++) {
        bingo_num[y * size + x] = true;
      }
    }
  }

  // 横
  for (y = 0; y < size; y++) {
    bool is_bingo = true;
    for (x = 0; x < size; x++) {
      if (card[y * size + x] != -1) {
        is_bingo = false;
        break;
      }
    }
    if (is_bingo) {
      cnt++;
      for (x = 0; x < size; x++) {
        bingo_num[y * size + x] = true;
      }
    }
  }

  // 斜め
  bool is_bingo[2];
  is_bingo[0] = true;
  is_bingo[1] = true;
  for (y = 0; y < size; y++) {
    if (card[y * size + y] != -1) {
      is_bingo[0] = false;
    }
    if (card[y * size + size - 1 - y] != -1) {
      is_bingo[1] = false;
    }
  }
  for (y = 0; y < 2; y++) {
    if (is_bingo[y])
      cnt++;
  }
  for (y = 0; y < size; y++) {
    if (is_bingo[0]) {
      bingo_num[y * size + y] = true;
    }
    if (is_bingo[1]) {
      bingo_num[y * size + size - 1 - y] = true;
    }
  }

  return cnt;
}

void print_card(int *card, int width, bool *bingo_num) {
  int y, x;
  for (y = 0; y < width; y++) {
    for (x = 0; x < width; x++) {
      int num = card[y * width + x];
      if (bingo_num[y * width + x]) {
        printf("\x1b[44m  \x1b[0m ");
      } else if (num == -1) {
        printf("\x1b[43m  \x1b[0m ");
      } else {
        printf("%2d ", num);
      }
    }
    printf("\n");
  }
}

bool open_card(int *card, int width, int num) {
  int i;
  for (i = 0; i < width * width; i++) {
    if (card[i] == num) {
      card[i] = -1;
      return true;
    }
  }

  return false;
}

int gen_rand_range(int min_val, int max_val) {
  return (int)(rand() % (max_val + 1 - min_val)) + min_val;
}

void shuffle(int *array, int size) {
  for (int i = 0; i < size; i++) {
    int r = gen_rand_range(i, size - 1);
    int tmp = array[i];
    array[i] = array[r];
    array[r] = tmp;
  }
}

int main(void) {
  int i;
  int size = 5;
  int card[size * size];
  bool bingo_num[size * size];

  // カードの初期化
  srand((unsigned int)time(NULL));
  int rands[64];
  for (i = 1; i <= 64; i++) {
    rands[i - 1] = i;
  }
  shuffle(rands, 64);
  for (i = 0; i < size * size; i++) {
    bingo_num[i] = false;
    card[i] = rands[i];
  }
  shuffle(rands, 64);

  int cnt = 0;
  print_card(card, size, bingo_num);
  for (i = 0; i < 64; i++) {
    // ビンゴを開ける
    int r = rands[i];
    printf("num = %d\n", r);
    open_card(card, size, r);

    cnt = count_bingo(card, size, bingo_num);
    printf("bingo count = %d\n", cnt);

    printf("%c[2J", 27);
    printf("\033[5;0H");
    usleep(500000);

    print_card(card, size, bingo_num);
  }
  return 0;
}

/* 実行結果
17  6  7 13 14
 0 16 20  1 21
22  0 11 18 10
 2  5  9  8 24
12 15 19  4  3
num = 47
bingo count = 0
 */
