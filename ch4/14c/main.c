#include <stdio.h>

int main(void) {
  int a = 10, b = 5;
  int res;

  res = a  / b * 2;
  printf("a / b * 2 : %d\n", res);
  res = ++a * 3;
  printf("++a * 3 : %d\n", res);
  res = a > b && a != 5;
  printf("a > b && a != 5 : %d\n", res);
  res = a % 3 == 0;
  printf("a % 3 == 0 : %d\n", res);
  
  return 0;
}
