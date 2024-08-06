// C Primer Plus (6th edition). Stephen Prata. Listing 3.2.
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

  int ten = 10;
  int two = 2;

  printf("Выполняется правильно:\n");
  printf("%d минус %d равно %d.\n", ten, 2, ten - two);

  printf("Выполняется неправильно:\n");
  printf("%d минус %d равно %d.\n", ten);
  
  return 0;
}