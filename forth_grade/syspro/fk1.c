#include <stdio.h>
#include <unistd.h>
int main(void) {
  pid_t pid;
  int i;
  fork();
  pid = getpid();
  for (i = 0; i < 10; i++) {
    fprintf(stderr, "PID=%d i=%d\n", pid, i);
  }
  return 0;
}
