// C Primer Plus (6th edition). Stephen Prata. Listing 3.4.
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

  unsigned int un = 3000000000U;
  short int end = 200;
  long int big = 65537L;
  long long int verybig = 12345678908642LL;

  printf("un = %u (%%u), но не %d (%%d).\n\n", un, un);
  printf("end = %hd (%%hd) или %d (%%d).\n\n", end, end);
  printf("big = %ld (%%ld), но не %hd (%%hd).\n\n", big, big);
  printf("verybig = %lld (%%lld), но не %ld (%%ld).\n\n", verybig, verybig); // в моей системе ld = lld. Пример из листинга не работает

  return 0;
}