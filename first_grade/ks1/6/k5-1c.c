/* 23 豊島圭吾
 * 課題集第6回目 プログラム6
 */
/*
x = int(input())     # 上限の整数値xを入力
a = [True] * (x + 1) # 素数判定用の配列a[1]～a[x]相当を全て真の値で初期化
a[1] = False         # a[1]に，iが素数ではないことを示す偽の値を格納
r = []               # 素数を格納する配列相当を初期化

i = 1
while i <= x:             # 整数i = 1, 2, ..., xそれぞれについて，
    if a[i]:              # もしiが真＝素数であり，
        if i <= x ** 0.5: # そのiがxの平方根の値以下であれば，
            j = i * i
            while j <= x: # i*iからxまでのiの倍数は素数ではないとする
                a[j] = False
                j = j + i
        r += [i]          # 素数iをrに格納
    i = i + 1

print(len(r)) # 素数の個数を表示
print(r[-1])  # 最も大きい素数を表示
 */

#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int n, i, r;
  printf("N = ");
  scanf("%d", &n);
  double sqrt_n = sqrt(n);

  int primes[n];
  bool a[n + 1];
  for (i = 0; i < n + 1; i++) {
    a[i] = true;
    primes[i] = 1;
  }
  a[1] = false;

  i = 1;
  while (i <= n) {
    if (a[i]) {
      if (i < sqrt_n) {
        r = i * i;
      }
    }
  }

  return 0;
}
