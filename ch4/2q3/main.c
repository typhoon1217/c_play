#include <stdio.h>

int main(void) {
  int hour, min, sec;
  double time = 3.76;

  hour = time;
  min = (time - hour) * 60;
  sec = ((time - hour) * 60 - min) * 60;
  printf("hour: %d, min: %d, sec: %d\n", hour, min, sec);
  return 0;
}
