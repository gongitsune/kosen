#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WORD_CNT 382

int randint(int n) { return rand() % n; }
void shuffle(int arr[], int size) {
  int i, j, tmp;
  for (i = 0; i < WORD_CNT / 2; i++) {
    j = randint(size);
    tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
  }
}

int main(void) {
  srand((unsigned int)time(NULL));

  char en_words[WORD_CNT][20];
  char jp_words[WORD_CNT][20];

  FILE *fp;
  if ((fp = fopen("tango.txt", "r")) == NULL) {
    printf("ファイルをオープンできません。\n");
    return 1;
  }

  int i, r;
  for (i = 0; i < WORD_CNT; i++) {
    fscanf(fp, "%s%s", en_words[i], jp_words[i]);
  }
  fclose(fp);

  int q_num, selection_num;
  printf("問題を何問解きますか？: ");
  scanf("%d", &q_num);
  printf("選択肢の数は？: ");
  scanf("%d", &selection_num);
  if (selection_num > 10) {
    printf("選択肢の数は10以下にしてください。");
    return EXIT_FAILURE;
  }

  int shuffle_arr[WORD_CNT];

  int right_cnt = 0;
  for (i = 0; i < q_num; i++) {
    int q_idx_en = randint(WORD_CNT);

    printf("英単語: %s\n", en_words[q_idx_en]);
    printf("-----選択肢-----\n");

    for (r = 0; r < WORD_CNT; r++) {
      shuffle_arr[r] = r;
    }
    shuffle(shuffle_arr, WORD_CNT);

    int is_containt_ans = 0;
    for (r = 0; r < selection_num; r++) {
      int q_idx_jp = shuffle_arr[r];
      if (q_idx_en == q_idx_jp) {
        is_containt_ans = 1;
        break;
      }
    }
    if (is_containt_ans == 0) {
      int tmp_idx = randint(selection_num);
      shuffle_arr[tmp_idx] = q_idx_en;
    }
    for (r = 0; r < selection_num; r++) {
      int q_idx_jp = shuffle_arr[r];
      printf("%d: %s\n", r + 1, jp_words[q_idx_jp]);
    }
    printf("----------------\n");

    int ans = 0;
    while (ans < 1 || ans > selection_num) {
      printf("選択肢から正しい答えを選んでください: ");
      scanf("%d", &ans);
    }

    if (q_idx_en == shuffle_arr[ans - 1]) {
      printf("正解です！\n");
      right_cnt++;
    } else {
      printf("不正解です。正解は%sです。\n", jp_words[q_idx_en]);
    }
    printf("\n\n");
  }

  printf("%d問中%d問正解しました。\n", q_num, right_cnt);
  printf("正答率は%.2f%%です。\n", (double)right_cnt / q_num * 100);

  return 0;
}

/* 実行結果
問題を何問解きますか？: 5
選択肢の数は？: 2
英単語: let
-----選択肢-----
1: させる
2: 選ぶ
----------------
選択肢から正しい答えを選んでください: 1
正解です！


英単語: affect
-----選択肢-----
1: 親切
2: 影響
----------------
選択肢から正しい答えを選んでください: 1
不正解です。正解は影響です。


英単語: organize
-----選択肢-----
1: 忘
2: 組織化
----------------
選択肢から正しい答えを選んでください: 2
正解です！


英単語: know
-----選択肢-----
1: 知
2: 成遂
----------------
選択肢から正しい答えを選んでください: 1
正解です！


英単語: serve
-----選択肢-----
1: 障害を除く
2: 奉公
----------------
選択肢から正しい答えを選んでください: 1
不正解です。正解は奉公です。


5問中3問正解しました。
正答率は60.00%です。
*/
