#include <stdio.h>

int main(void) {
  int kor = 3, eng = 5, mat = 4;
  int credits;
  double res;
  double kscore = 3.8, escore = 4.4, mscore = 3.9;
  double grade;

  credits = kor + eng + mat;
  grade = (kscore * kor + escore * eng + mscore * mat) / credits;

  printf("credits: %d\n", credits);
  printf("grade: %.1f\n", grade);

  return 0;
}
