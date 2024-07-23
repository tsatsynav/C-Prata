// C Primer Plus (6th edition). Stephen Prata. Listing 1.1.
// Fedora Linux 40 (Workstation Edition).
// gcc (GCC) 14.1.1 20240701 (Red Hat 14.1.1-7)
// Lenovo ThinkPad E15 Gen 4
// 12th Gen Intel® Core™ i5-1235U × 12
// Andrey Tsatsyn
// tsatsynav@yandex.ru
// https://t.me/TsatsynAV

#include <stdio.h>

int main(void) {
int dogs = 0;
puts("How many dogs you have?(input a num): ");
scanf("%d", &dogs);
if (dogs == 1) {
    printf("\nGreat! You have one dog.\n");
} else if (dogs > 1) {
    printf("\nGreat! You have %d dogs.\n", dogs);
} else {
    printf("\nSo sad :(( You don't have a dog.\n");
}

return 0;
}
