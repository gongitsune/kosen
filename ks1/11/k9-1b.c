/* 23 豊島圭吾
 * 第11回課題 プログラム3
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
      fprintf(out_fp, "%2d %3d %3d %4.1f\n", no, a, b, (double)(a + b) / 2);
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
 1  98  54 76.0
 2  56  47 51.5
 3  76  59 67.5
 4  59  58 58.5
 5  88  39 63.5
 6  95  74 84.5
 7  84  29 56.5
 8  68  82 75.0
 9  56  91 73.5
10  45  66 55.5
*/
