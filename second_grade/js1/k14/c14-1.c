/* 23 豊島圭吾
 * 第14回挑戦的課題 プログラム1
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char *file_name;
  int is_numbered = 0;

  if (argc == 2) {
    file_name = argv[1];
  } else if (argc == 3 && strcmp(argv[1], "-n") == 0) {
    file_name = argv[2];
    is_numbered = 1;
  } else {
    printf("使用方法: ./c14-1 file\n");
    printf("          ./c14-1 -n file\n");
    return 1;
  }

  FILE *fp;
  if ((fp = fopen(file_name, "r")) == NULL) {
    printf("エラー: %s が存在しません。\n", file_name);
    return 1;
  }

  char s;
  int i = 0;
  int is_newline = 1;
  while (fscanf(fp, "%c", &s) != EOF) {
    if (is_numbered && is_newline) {
      printf("%d: ", ++i);
      is_newline = 0;
    }
    printf("%c", s);
    is_newline = s == '\n';
  }

  fclose(fp);
  return 0;
}

/* 実行結果
$ ./c14-1 seiseki2.txt
80  2
81  1
92  4
60  2
73  2
99  2
85  3
77  2
65  1
88  2


$ ./c14-1 -n seiseki2.txt
1: 80  2
2: 81  1
3: 92  4
4: 60  2
5: 73  2
6: 99  2
7: 85  3
8: 77  2
9: 65  1
10: 88  2
11:
*/
