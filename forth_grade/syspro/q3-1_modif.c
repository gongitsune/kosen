#include <stdio.h>
#include <unistd.h>

int main() {
  pid_t pid = fork();
  if (pid != 0) {
    fprintf(stderr, "forkの返り値(親):%d\n", pid);
  } else {
    fprintf(stderr, "forkの返り値(子):%d\n", pid);
  }
  return 0;
}
