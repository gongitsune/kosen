#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <time.h>
#include <unistd.h>

int kbhit(void) {
  struct termios oldt, newt;
  int ch;
  int oldf;

  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
  fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

  ch = getchar();

  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  fcntl(STDIN_FILENO, F_SETFL, oldf);

  if (ch != EOF) {
    ungetc(ch, stdin);
    return 1;
  }

  return 0;
}

#define WORD_CNT 382

int randint(int n) { return rand() % n; }

int main(void) {
  srand((unsigned int)time(NULL));

  char en_words[WORD_CNT][20];
  char jp_words[WORD_CNT][20];

  FILE *fp;
  if ((fp = fopen("tango.txt", "r")) == NULL) {
    printf("ファイルをオープンできません。\n");
    return 1;
  }

  int i;
  for (i = 0; i < WORD_CNT; i++) {
    fscanf(fp, "%s%s", en_words[i], jp_words[i]);
  }
  fclose(fp);

  return 0;
}
