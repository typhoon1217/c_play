#include <stdio.h>

int main(void) {
  int a = 20, b = 3;
  double res;

  res = ((double)a) / ((double)b);
  printf("a = %d, b = %d\n", a, b);
  printf("res = %.1f\n", res);

  a = (int)res;
  printf("(int) %.1lf의 결과 : %d\n", res, a);

  return 0;
}
