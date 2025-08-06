#include <stdio.h>

int main(void) {
  int a, b;
  int sum, sub, mul, inv;

  a = 10;
  b = 20;

  sum = a + b;
  sub = a - b;
  mul = a * b;
  inv = -a;

  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("sum = %d\n", sum);
  printf("sub = %d\n", sub);
  printf("mul = %d\n", mul);
  printf("inv = %d\n", inv);

  return 0;
}
