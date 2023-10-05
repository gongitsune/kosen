#include <stdio.h>

#define BOARD_ROW 10
#define BOARD_COL 7

void draw(int *board[]) {
  const char chars[2] = {' ', '#'};

  int i, j;
  for (i = 0; i < BOARD_ROW; i++) {
    int *board_row = board[i];
    for (j = 0; j < BOARD_COL; j++) {
      printf("%c", chars[board_row[j]]);
    }
    printf("\n");
  }
}

void create_board(int *board[]) {
  // 全面埋める
}

int main(void) {
  int board[BOARD_ROW][BOARD_COL];

  return 0;
}
