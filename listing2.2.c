// C Primer Plus (6th edition). Stephen Prata. Listing 1.1.
// Fedora Linux 40 (Workstation Edition).
// Visual Studio Code
// gcc (GCC) 14.1.1 20240701 (Red Hat 14.1.1-7)
// Lenovo ThinkPad E15 Gen 4
// 12th Gen Intel® Core™ i5-1235U × 12
// Andrey Tsatsyn
// tsatsynav@yandex.ru
// https://t.me/TsatsynAV

#include <stdio.h>

int main(void) {
  int feets, fathoms;
  fathoms = 2;
  feets = fathoms * 6;
  printf("In %d fathoms %d feets!\n", fathoms, feets);
  printf("Yes %d feets!\n", fathoms * 6);
  return 0;
}