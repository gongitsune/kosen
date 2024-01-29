/* 23 豊島圭吾
 * 第14回レポート プログラム1
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("使用方法: ./r14-1 file\n");
    return 1;
  }

  FILE *fp;
  if ((fp = fopen(argv[1], "r")) == NULL) {
    printf("エラー: %s が存在しません。\n", argv[1]);
    return 1;
  }

  char s;
  while (fscanf(fp, "%c", &s) != EOF) {
    printf("%c", s);
  }

  fclose(fp);
  return 0;
}
