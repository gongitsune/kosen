#include "list.h"
#include <stdio.h>

int main(void) {
  char data[20];
  struct node *head = NULL;

  add_tail("a", &head);
  add_tail("b", &head);
  add_tail("c", &head);

  int loop = 1;
  while (loop) {
    printf("===========================\n");
    printf(" 1) ノードの追加\n");
    printf(" 2) 任意の位置にノード挿入\n");
    printf(" 3) 任意の位置のノード削除\n");
    printf(" 4) ノード名でノード削除\n");
    printf(" 5) 全ノード削除\n");
    printf(" 6) 終了\n");
    printf(" 7) ノードの追加(末尾)\n");
    printf(" 8) ノードの検索\n");
    printf(" 9) delete from\n");
    printf(" 10) ノード数\n");
    printf(" 11) ノードのデータ設定\n");

    // リスト表示
    printf("現在のリスト: ");
    show(head);

    // コマンド入力
    int cmd;
    printf("どの処理を行いますか: ");
    scanf("%d", &cmd);

    // コマンド処理
    switch (cmd) {
    case 1:
      printf("入力データ: ");
      scanf("%s", data);
      insert(0, data, &head);
      break;
    case 2:
      printf("挿入するデータ: ");
      scanf("%s", data);
      printf("何番目の後に: ");
      int n;
      scanf("%d", &n);
      insert(n, data, &head);
      break;
    case 3:
      printf("何番目を削除する: ");
      int n2;
      scanf("%d", &n2);
      delete_by_index(n2, &head);
      break;
    case 4:
      printf("何を削除する: ");
      scanf("%s", data);
      delete_by_name(data, &head);
      break;
    case 5:
      free_list(&head);
      break;
    case 6:
      loop = 0;
      break;
    case 7:
      printf("入力データ: ");
      scanf("%s", data);
      int node_cnt = add_tail(data, &head);
      printf("ノード数: %d\n", node_cnt);
      break;
    case 8:
      printf("検索するデータ: ");
      scanf("%s", data);
      int nf = find(data, head);
      if (nf == -1) {
        printf("見つかりませんでした\n");
      } else {
        printf("見つかりました: %d番目\n", nf);
      }
      break;
    case 9:
      printf("どこから削除するか: ");
      int from;
      scanf("%d", &from);
      del_from(from, &head);
      break;
    case 10:
      printf("ノード数: %d\n", count(head));
      break;
    case 11:
      printf("何番目のデータを設定するか: ");
      int n3;
      scanf("%d", &n3);
      printf("データ: ");
      scanf("%s", data);
      set_data(n3, data, head);
      break;
    }
  }

  free_list(&head);
  return 0;
}

/*実行結果
===========================
 1) ノードの追加
 2) 任意の位置にノード挿入
 3) 任意の位置のノード削除
 4) ノード名でノード削除
 5) 全ノード削除
 6) 終了
 7) ノードの追加(末尾)
 8) ノードの検索
 9) delete from
 10) ノード数
 11) ノードのデータ設定
現在のリスト: a -> b -> c -> NULL
どの処理を行いますか: 10
ノード数: 3
===========================
 1) ノードの追加
 2) 任意の位置にノード挿入
 3) 任意の位置のノード削除
 4) ノード名でノード削除
 5) 全ノード削除
 6) 終了
 7) ノードの追加(末尾)
 8) ノードの検索
 9) delete from
 10) ノード数
 11) ノードのデータ設定
現在のリスト: a -> b -> c -> NULL
どの処理を行いますか: 10
ノード数: 3
===========================
 1) ノードの追加
 2) 任意の位置にノード挿入
 3) 任意の位置のノード削除
 4) ノード名でノード削除
 5) 全ノード削除
 6) 終了
 7) ノードの追加(末尾)
 8) ノードの検索
 9) delete from
 10) ノード数
 11) ノードのデータ設定
現在のリスト: a -> b -> c -> NULL
どの処理を行いますか: 11
何番目のデータを設定するか: 2
データ: r
===========================
 1) ノードの追加
 2) 任意の位置にノード挿入
 3) 任意の位置のノード削除
 4) ノード名でノード削除
 5) 全ノード削除
 6) 終了
 7) ノードの追加(末尾)
 8) ノードの検索
 9) delete from
 10) ノード数
 11) ノードのデータ設定
現在のリスト: a -> r -> c -> NULL
どの処理を行いますか: 6
 */