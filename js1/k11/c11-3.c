/* 23 豊島圭吾
 * 第11回挑戦的課題プログラム3
 */

#include <stdio.h>
#define IN 1
#define OUT 0

int main(void) {
  char s1[100], s2[100], s3[100], tmp[100];
  int s2_len, s3_len;
  printf("string1 = ");
  scanf("%s", s1);
  printf("string2 = ");
  scanf("%s%n", s2, &s2_len);
  printf("string3 = ");
  scanf("%s%n", s3, &s3_len);

  s2_len--;
  s3_len--;

  int s1_i = -1, s2_i = 0, state = OUT;
  while (s1[++s1_i] != '\0') {
    if (s1[s1_i] == s2[0]) {
      s2_i = 0;
      state = IN;
    }

    if (state == IN && s1[s1_i] == s2[s2_i++]) {
      if (s2[s2_i] == '\0') {
        // 文字を置換
        {
          int start = s1_i - s2_i + 1;

          int i = 0;
          if (s3_len < s2_len) {
            // 短くなる方向に配列をスライドさせる場合
            int diff = s2_len - s3_len; // どれだけずらすか
            int idx;
            while (s1[idx = start + s3_len + i + diff] != '\0') {
              s1[idx - diff] = s1[idx];
              i++;
            }
            s1[idx - diff] = '\0';

            // s1_i を diff だけずらす
            s1_i -= diff;
          } else if (s3_len > s2_len) {
            // 長くなる方向に配列をスライドさせる場合
            int diff = s3_len - s2_len; // どれだけずらすか
            int block_idx = diff;

            char tmp; // swap 用の一時変数
            while (s1[start] != '\0') {
              // 空白になる部分を一時変数として使いながら
              // diff個ずつずらしていく
              for (i = 0; i < diff; i++) {
                tmp = s1[start + i];
                s1[start + i] = s1[start + i + block_idx];
                s1[start + i + block_idx] = tmp;
              }

              block_idx += diff;
            }
            s1[start + block_idx] = '\0';
          }

          // 空いた隙間に文字を挿入
          for (i = 0; i < s3_len; i++) {
            s1[start + i] = s3[i];
          }
        }

        state = OUT;
      }
    } else {
      state = OUT;
    }
  }

  printf("string1 = %s\n", s1);

  return 0;
}

/* 実行結果
string1 = abc123aabc1234aaabc12345
string2 = abc
string3 = ----
string1 = ----123a----1234aa----12345
*/
