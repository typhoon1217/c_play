#include <stdio.h>

int main(void) {
  unsigned int a;

  a = 4294967295;
  printf("a: %d\n", a);
  printf("a: %u\n", a);
  a = -1;
  printf("a: %u\n", a);
  printf("a: %d\n", a);
  return 0;
}
