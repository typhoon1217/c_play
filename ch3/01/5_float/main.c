#include <stdio.h>

int main(void) {
  float ft = 1.234567890123456789;
  double db = 1.234567890123456789;

  printf("ft: %.20f\n", ft);
  printf("db: %.20lf\n", db);

  return 0;
}
