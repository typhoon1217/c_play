#include <stdio.h>

int main(void) {

  char fruit[20];
  int cnt;

  printf("Please enter your fruit\n");

  scanf("%s", fruit);

  printf("Plase enter how many fruit you have\n");

  scanf("%d", &cnt);

  printf("fruit = %s\ncount = %d\n", fruit, cnt);

  return 0;
}
