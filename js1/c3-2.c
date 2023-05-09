/* 23 豊島圭吾
 * 第3回レポート 挑戦的課題プログラム2
 */

#include <stdio.h>
#include <unistd.h> /* usleep 関数を使うため */

void myprintf(char s[]);

int main(void) {
  int i;

  for (i = 0; i < 3; i++) {
    myprintf("　 ∧_∧\n　( ･ω･ )\n　_(⊃／ヽ-、\n／ -(＿＿＿／\n￣￣￣￣￣");
    myprintf("　 ＜⌒ ／⌒⌒ヽ\n／＜,' з/＿＿＿／\n￣￣￣￣￣￣￣");
  }
  return 0;
}

void myprintf(char s[]) {
  printf("%c[2J", 27);
  printf("%s\n", s);
  usleep(500000);
}

/* 実行結果






























　 ＜⌒ ／⌒⌒ヽ
／＜,' з/＿＿＿／
￣￣￣￣￣￣￣
 */
