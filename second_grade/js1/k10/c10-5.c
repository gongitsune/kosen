/* 23 豊島圭吾
 * 第10回挑戦的課題 プログラム5
 */

#include <stdio.h>

int main(void) {
  char c;
  int count = 0;
  while (scanf("%c", &c) != EOF) {
    if (c == '(' || c == '{') {
      count++;
    } else if (c == ')' || c == '}') {
      count--;
    }
  }

  if (count == 0) {
    printf("あっています\n");
  } else if (count > 0) {
    printf("開きカッコが多すぎます\n");
  } else {
    printf("閉じカッコが多すぎます\n");
  }
  return 0;
}

/* 実行結果
#include
int main(void)
{
   while(1) {
       :
   }
}}
閉じカッコが多すぎます

#include
int main(void)
{
   while(1) {
       :
   }
}
あっています
*/
