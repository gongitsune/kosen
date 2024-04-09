/* 23 豊島圭吾
 * レポート8 プログラム3
 */

#include <stdio.h>

int main(void) {
  char *month[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                   "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

  int d[5][12], m_total[5], y_total[12];

  int i, r;
  for (i = 0; i < 5; i++) {
    m_total[i] = 0;
    for (r = 0; r < 12; r++) {
      scanf("%d", &d[i][r]);
      m_total[i] += d[i][r];
    }
  }

  for (r = 0; r < 12; r++) {
    y_total[r] = 0;
    for (i = 0; i < 5; i++) {
      y_total[r] += d[i][r];
    }
  }

  printf("        ");
  for (i = 0; i < 12; i++)
    printf("%s   ", month[i]);
  printf("月平均\n");

  for (i = 0; i < 5; i++) {
    printf("%4d    ", 1993 + i);
    for (r = 0; r < 12; r++)
      printf("%3d   ", d[i][r]);
    printf("%.1f\n", m_total[i] / 12.0);
  }

  printf("年平  ");
  for (i = 0; i < 12; i++)
    printf("%5.1f ", y_total[i] / 5.0);
  double total = 0;
  for (i = 0; i < 5; i++)
    total += m_total[i] / 12.0;
  printf(" %5.1f\n", total / 5.0);

  return 0;
}

/* 実行結果 23 豊島圭吾
36 51 71 96 100 158 135 102 201 103 60 30
42 46 65 100 107 170 128 100 190 110 68 29
48 52 68 109 114 166 131 92 196 106 70 35
37 47 70 89 93 160 125 86 189 99 65 40
40 54 71 101 100 169 132 96 197 108 64 28
        Jan   Feb   Mar   Apr   May   Jun   Jul   Aug   Sep   Oct   Nov   Dec
月平均 1993     36    51    71    96   100   158   135   102   201   103    60
30   95.2 1994     42    46    65   100   107   170   128   100   190   110 68
29   96.2 1995     48    52    68   109   114   166   131    92   196   106 70
35   98.9 1996     37    47    70    89    93   160   125    86   189    99 65
40   91.7 1997     40    54    71   101   100   169   132    96   197   108 64
28   96.7 年平   40.6  50.0  69.0  99.0 102.8 164.6 130.2  95.2 194.6
105.2  65.4  32.4   95.8
 */
