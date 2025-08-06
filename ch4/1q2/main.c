#include <stdio.h>

int main(void) {
  int a, b, tot;
  double avg;

  printf("score of two numbers: ");
  scanf("%d %d", &a, &b);
  tot = a + b;
  avg = tot / 2.0;
  printf("avg: %.1f\n", avg);

  return 0;
}
