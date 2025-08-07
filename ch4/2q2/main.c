#include <stdio.h>

int main(void) {
  int seat = 70;
  int audience = 65;
  double rate;

  rate = (double)audience / (double)seat * 100;
  printf("rate: %.1f\n", rate);
  return 0;
}
