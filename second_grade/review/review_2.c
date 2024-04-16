#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint(int min, int max) { return rand() % (max - min) + min; }

void shuffle(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    int j = randint(i, n);
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
  }
}

int main(void) {
  srand((unsigned)time(NULL));

  int n;
  printf("クラス人数 = ");
  scanf("%d", &n);

  int *students = (int *)malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++)
    students[i] = i + 1;
  shuffle(students, n);

  for (int i = 0; i < n; i++)
    printf("%d\n", students[i]);

  free(students);
  return 0;
}

/*
クラス人数 = 42
38
30
7
24
3
27
18
5
20
6
25
42
8
14
35
9
4
23
40
36
26
31
33
28
16
1
19
21
34
13
41
22
17
12
15
29
39
32
2
10
11
37
*/
