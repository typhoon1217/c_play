#include <stdio.h>

int main(void) {

  int a = 5, b = 5;
  int pre, post;

  pre = (++a) * 3;
  post = (b++) * 3;

  printf("pre: %d \npost: %d\n", pre, post);

  return 0;
}
