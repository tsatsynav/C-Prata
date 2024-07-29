// C Primer Plus (6th edition). Stephen Prata. Chapter 2 task 7.
// Fedora Linux 40 (Workstation Edition).
// Visual Studio Code
// gcc (GCC) 14.1.1 20240701 (Red Hat 14.1.1-7)
// Lenovo ThinkPad E15 Gen 4
// 12th Gen Intel® Core™ i5-1235U × 12
// Andrey Tsatsyn
// tsatsynav@yandex.ru
// https://t.me/TsatsynAV

#include <stdio.h>

void smile(void);

int main(void) {
  smile();
  smile();
  smile();
  printf("\n");
  smile();
  smile();
  printf("\n");
  smile();
  printf("\n");
  return 0;
}

void smile(void) {
  printf("Улыбайся!");
}