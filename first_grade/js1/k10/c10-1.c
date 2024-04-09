/* 23 豊島圭吾
 * 第10回挑戦的課題 プログラム1
 */

#include <stdio.h>

int main(void) {
  char c;
  int i;

  int cnt[26];
  for (i = 0; i < 26; i++)
    cnt[i] = 0;
  while (scanf("%c", &c) != EOF) {
    if (c >= 0x61 && c <= 0x7A)
      cnt[c - 0x61]++;
    else if (c >= 0x41 && c <= 0x5A)
      cnt[c - 0x41]++;
  }

  for (i = 0; i < 26; i++)
    printf("%c = %d\n", i + 0x41, cnt[i]);

  return 0;
}

/* 実行結果
A = 1045
B = 166
C = 173
D = 650
E = 1565
F = 255
G = 236
H = 931
I = 690
J = 3
K = 125
L = 519
M = 201
N = 932
O = 947
P = 153
Q = 23
R = 589
S = 793
T = 1091
U = 329
V = 98
W = 469
X = 1
Y = 197
Z = 1
*/
