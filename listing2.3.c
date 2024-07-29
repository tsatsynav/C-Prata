// C Primer Plus (6th edition). Stephen Prata. Listing 2.3.
// Fedora Linux 40 (Workstation Edition).
// Visual Studio Code
// gcc (GCC) 14.1.1 20240701 (Red Hat 14.1.1-7)
// Lenovo ThinkPad E15 Gen 4
// 12th Gen Intel® Core™ i5-1235U × 12
// Andrey Tsatsyn
// tsatsynav@yandex.ru
// https://t.me/TsatsynAV

#include <stdio.h>

void butler(void);

int main(void) {
  printf("Я вызываю дворецкого!\n");
  butler();
  printf("Да! Принесите мне чай и записываемые DVD-диски.\n");
  
  return 0;
}

void butler(void) {
  printf("Вы звонили, сэр?!\n");
}