// C Primer Plus (6th edition). Stephen Prata. Listing 3.3.
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

  int x = 100;

  printf("Десятичное представление числа %d = %d, восьмеричное представление числа %d = %o, шестандцатеричное представление числа %d = %x\n", x, x, x, x, x, x);
  printf("Десятичное представление числа %d = %d, восьмеричное представление числа %d = %#o, шестандцатеричное представление числа %d = %#x\n", x, x, x, x, x, x);

  return 0;
}