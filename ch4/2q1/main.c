#include <stdio.h>

int main(void) {
  int res;

  res = sizeof(short) > sizeof(long);

  res == 1 ? printf("short\n") : printf("long\n");

  return 0;
}
