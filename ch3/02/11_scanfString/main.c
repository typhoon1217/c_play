#include <stdio.h>

int main(void) {

  char grade;
  char name[20];

  printf("Please enter your grade\n");
  scanf("%c", &grade);
  printf("plase enter your name\n");
  scanf("%s", name);

  printf("grade = %c\nname = %s\n", grade, name);

  return 0;
}
