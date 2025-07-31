#include <stdio.h>

int main(void) {
  printf("Be happy \n");
  printf("12345678901234567890\n");
  printf("my\tfreind\n");
  // " my "를 출력하고 탭의 위치로 이동 ("My\tfreind\n");
  printf("Goot\bd\tchance\n"); // "Goot" 를 출력하고 줄을 바꿈 ("\n")
  // t 를 d 로 바꾸고 탭의 위치로 이동 (\t) 후에 "chance" 를 출력하고 줄을 바꿈
  // (\n)
  printf("Cow\rW\a\n");
  // 맨앞으로 이동 (\r)해 C를 W로 바꾸고 벨소리(\a)를 내리고 줄을 바꿈 (\n)

  return 0;
}
