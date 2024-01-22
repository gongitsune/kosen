/* 23 豊島圭吾
 * 第11回課題 プログラム2
 */

#include <stdio.h>

int main(void) {
  FILE *out_fp, *A_fp, *B_fp;
  if ((out_fp = fopen("C", "w")) == NULL) {
    printf("ファイルCをオープンできません。\n");
    return 1;
  }

  if ((A_fp = fopen("A", "r")) == NULL) {
    printf("ファイルAをオープンできません。\n");
    return 1;
  }
  if ((B_fp = fopen("B", "r")) == NULL) {
    printf("ファイルBをオープンできません。\n");
    return 1;
  }

  int a, b, no;
  while (fscanf(A_fp, "%d%d", &no, &a) != EOF) {
    if (fscanf(B_fp, "%d%d", &no, &b) != EOF)
      fprintf(out_fp, "%2d %3d %3d\n", no, a, b);
  }

  fclose(out_fp);
  fclose(A_fp);
  fclose(B_fp);

  return 0;
}

/* 実行結果 23 豊島圭吾
------------
ファイルC
------------
 1  98  54
 2  56  47
 3  76  59
 4  59  58
 5  88  39
 6  95  74
 7  84  29
 8  68  82
 9  56  91
10  45  66
*/
