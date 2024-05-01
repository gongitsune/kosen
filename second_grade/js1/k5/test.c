#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gen_rand_range(int min_val, int max_val) {
  return (int)(rand() % (max_val + 1 - min_val)) + min_val;
}
void shuffle(int *array, int size) {
  for (int i = 0; i < size; i++) {
    int r = gen_rand_range(i, size - 1);
    int tmp = array[i];
    array[i] = array[r];
    array[r] = tmp;
  }
}

int main(void) {
  srand((unsigned int)time(NULL));
  int i;
  int rands[64];
  for (i = 0; i < 64; i++) {
    rands[i] = i + 1;
  }
  return 0;
}
