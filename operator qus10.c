#include <stdio.h>

int divide(int dividend, int divisor) {
    if (divisor == 0) {
        printf("Error! Division by zero is not allowed.\n");
        return -1;
    }

    int quotient = 0;
    int sign = 1;
    if (dividend < 0 && divisor > 0) {
        sign = -1;
        dividend = -dividend;
    } else if (dividend > 0 && divisor < 0) {
        sign = -1;
        divisor = -divisor;
    } else if (dividend < 0 && divisor < 0) {
        dividend = -dividend;
        divisor = -divisor;
    }
    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }

    return sign * quotient;
}

int main() {
    int num1, num2;
    printf("Enter the dividend: ");
    scanf("%d", &num1);
    printf("Enter the divisor: ");
    scanf("%d", &num2);

    int result = divide(num1, num2);

    if (result != -1) {
        printf("The result of division is: %d\n", result);
    }
return 0;
}
