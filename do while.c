#include <stdio.h>

int main() {
    int num;
    do {
        printf("Enter a number greater than 10: ");
        scanf("%d", &num);
    } while (num <= 10);

    printf("You entered a number greater than 10: %d\n", num);

    return 0;
}
