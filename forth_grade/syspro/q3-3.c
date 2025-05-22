#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
  pid_t pid, pid2;
  fprintf(stderr, "Hello-0!\n");
  pid = fork();
  if (pid == 0) {
    fprintf(stderr, "Hello-1!\n");
  }
  pid2 = fork();
  if (pid2 == 0) {
    fprintf(stderr, "Hello-2!\n");
    exit(0);
  }
  fprintf(stderr, "Hello-3!\n");
  return 0;
}
