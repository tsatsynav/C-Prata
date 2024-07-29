// C Primer Plus (6th edition). Stephen Prata. Chapter 2 task 6.
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
  int toes = 10;

  printf("Имеется число: %d.\n", toes);
  printf("Удвоенное значение числа %d: %d.\n", toes, toes * 2);
  printf("Квадрат числа %d: %d.\n", toes, toes * toes);

  return 0;
}