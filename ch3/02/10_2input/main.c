#include <stdio.h>

int main(void) {
  int age;
  double height;

  printf("Please enter your age ang height\n");

  scanf("%d %lf", &age, &height);

  printf("age = %d\nheight = %.1lf\n", age, height);

  return 0;
}
