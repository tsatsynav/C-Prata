// C Primer Plus (6th edition). Stephen Prata. Chapter 2 task 8.
// Fedora Linux 40 (Workstation Edition).
// Visual Studio Code
// gcc (GCC) 14.1.1 20240701 (Red Hat 14.1.1-7)
// Lenovo ThinkPad E15 Gen 4
// 12th Gen Intel® Core™ i5-1235U × 12
// Andrey Tsatsyn
// tsatsynav@yandex.ru
// https://t.me/TsatsynAV

#include <stdio.h>

void one_three(void);
void two(void);

int main(void) {
  printf("Начинаем:\n");
  one_three();
  printf("Порядок!\n");
  return 0;
}

void one_three(void) {
  printf("Один\n");
  two();
  printf("Три\n");
}

void two(void) {
  printf("Два\n");
};