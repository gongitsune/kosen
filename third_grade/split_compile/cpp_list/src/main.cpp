#include "list.hpp"
#include <iostream>
#include <vector>

static const auto op_name = std::vector<std::string>{
    "exit", "add_head", "add_tail", "insert", "del_data", "show", "clear",
};

void print_menu() {
  for (int i = 0; i < op_name.size(); i++) {
    std::cout << i << ") " << op_name[i] << std::endl;
  }
}

template <typename T> bool exec_op(LinkedList<T> &list);

int main(void) {
  auto cond = true;
  auto list = LinkedList<int>();
  while (cond) {
    std::cout << "===========================" << std::endl;
    print_menu();
    cond = exec_op<int>(list);
    list.show();
  }

  return 0;
}

template <typename T> bool exec_op(LinkedList<T> &list) {
  int op;
  std::cout << "input operation: ";
  std::cin >> op;
  switch (op) {
  case 0: // exit
    return false;
  case 1: { // add_head
    T data;
    std::cout << "input data: ";
    std::cin >> data;
    list.add(data);
    return true;
  }
  case 2: { // add_tail
    T data;
    std::cout << "input data: ";
    std::cin >> data;
    list.add_tail(data);
    return true;
  }
  case 3: { // insert
    int idx;
    T data;
    std::cout << "input index: ";
    std::cin >> idx;
    std::cout << "input data: ";
    std::cin >> data;
    list.insert(idx, data);
    return true;
  }
  case 4: { // del_data
    T data;
    std::cout << "input data: ";
    std::cin >> data;
    list.del_data(data);
    return true;
  }
  case 5: // show
    list.show();
    break;
  case 6: // clear
    list.clear();
    break;
  default:
    std::cout << "invalid operation" << std::endl;
    return true;
  }
  return true;
}
template bool exec_op<int>(LinkedList<int> &list);

/*
int old_main(void) {
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
    int n = 0;
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
      scanf("%d", &n);
      insert(n, data, &head);
      break;
    case 3:
      printf("何番目を削除する: ");
      scanf("%d", &n);
      delete_by_index(n, &head);
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
    case 7: {
      printf("入力データ: ");
      scanf("%s", data);
      int node_cnt = add_tail(data, &head);
      printf("ノード数: %d\n", node_cnt);
      break;
    }
    case 8: {
      printf("検索するデータ: ");
      scanf("%s", data);
      int nf = find(data, head);
      if (nf == -1) {
        printf("見つかりませんでした\n");
      } else {
        printf("見つかりました: %d番目\n", nf);
      }
      break;
    }
    case 9: {
      printf("どこから削除するか: ");
      int from;
      scanf("%d", &from);
      del_from(from, &head);
      break;
    }
    case 10:
      printf("ノード数: %d\n", count(head));
      break;
    case 11:
      printf("何番目のデータを設定するか: ");
      scanf("%d", &n);
      printf("データ: ");
      scanf("%s", data);
      set_data(n, data, head);
      break;
    }
  }

  free_list(&head);
  return 0;
}
*/

/*実行結果
===========================
0) exit
1) add_head
2) add_tail
3) insert
4) del_data
5) show
6) clear
input operation: 1
input data: 10
[LinkedList::insert] Inserted at 0
10 -> NULL
===========================
0) exit
1) add_head
2) add_tail
3) insert
4) del_data
5) show
6) clear
input operation: 1
input data: 20
[LinkedList::insert] Inserted at 0
20 -> 10 -> NULL
===========================
0) exit
1) add_head
2) add_tail
3) insert
4) del_data
5) show
6) clear
input operation: 2
input data: 30
[LinkedList::insert] Inserted at 2
20 -> 10 -> 30 -> NULL
===========================
0) exit
1) add_head
2) add_tail
3) insert
4) del_data
5) show
6) clear
input operation: 3
input index: 2
input data: 60
[LinkedList::insert] Inserted at 2
20 -> 10 -> 60 -> 30 -> NULL
===========================
0) exit
1) add_head
2) add_tail
3) insert
4) del_data
5) show
6) clear
input operation: 4
input data: 10
[LinkedList::del_data] Deleted by data
20 -> 60 -> 30 -> NULL
===========================
0) exit
1) add_head
2) add_tail
3) insert
4) del_data
5) show
6) clear
input operation: 6
[LinkedList::del] Deleted at 1
[LinkedList::del] Deleted at 1
[LinkedList::del] Deleted at 1
[LinkedList::clear] Cleared
NULL
===========================
0) exit
1) add_head
2) add_tail
3) insert
4) del_data
5) show
6) clear
input operation: 0
NULL
[LinkedList::clear] Cleared
 */
