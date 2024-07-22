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
