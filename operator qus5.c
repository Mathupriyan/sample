#include <stdio.h>
int main() {
    int num = 16;
    num <<= 4;
    printf("Result after left shift (<<= 4): %d\n", num);
    num = 16;
    num >>= 3;
    printf("Result after right shift (>>= 3): %d\n", num);
    return 0;
}
