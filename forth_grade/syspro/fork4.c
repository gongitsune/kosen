#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
  pid_t pid1 = fork();
  if (pid1 == 0) {
    fprintf(stderr, "子プロセス1\n");
    exit(0);
  }

  pid_t pid2 = fork();
  if (pid2 == 0) {
    fprintf(stderr, "子プロセス2\n");
  }

  return 0;
}
