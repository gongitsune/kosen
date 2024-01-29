/* 23 豊島圭吾
 * 第14回レポート プログラム2
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("使用方法: ./r14-2 file1 file2\n");
    return 1;
  }

  FILE *fp1, *fp2;
  if ((fp1 = fopen(argv[1], "r")) == NULL) {
    printf("エラー: %s が存在しません。\n", argv[1]);
    return 1;
  }
  if ((fp2 = fopen(argv[2], "w")) == NULL) {
    printf("エラー: %s をオープンできませんでした。\n", argv[2]);
    return 1;
  }

  char s;
  while (fscanf(fp1, "%c", &s) != EOF) {
    fprintf(fp2, "%c", s);
  }

  fclose(fp1);
  fclose(fp2);
  return 0;
}
