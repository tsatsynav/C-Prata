// C Primer Plus (6th edition). Stephen Prata. Listing 3.1.
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
  float weight = 0; // переменная - вес пользователя
  float value = 0; // переменная - вес пользователя в платиновом эквиваленте

  float rhodium_price = 1700.0; // сделаем стоимость родия константой
  float ratio = 14.5833; // коэффициент для перевода веса, выраженного в футах, в тройские унции
  
  printf("Хотите узнать свой вес в платиновом эквиваленте?\n");
  printf("Давайте подсчитаем!\n");
  printf("Пожалуйста, введите свой вес, выраженный в фунтах:\n");

  scanf("%f", &weight);

  value = rhodium_price * weight * ratio;

  printf("Ваш вес в платиновом эквиваленте составляет $%.2f.\n", value);
  printf("Вы легко можете стать достойным этого! Если цена платины падает,\nешьте больше для поддержания своей стоимости.\n");
  
  return 0;
}