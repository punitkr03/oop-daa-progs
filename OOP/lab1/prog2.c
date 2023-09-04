#include <stdio.h>

void swapReference(int *a, int *b) {
    printf("Value before swap a = %d, b = %d\n", *a, *b);
    int c = *a;
    *a = *b;
    *b = c;
    printf("Value after swap a = %d, b = %d\n", *a, *b);
}

void swapValue(int a, int b) {
    printf("Value before swap a = %d, b = %d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("Value after swap a = %d, b = %d\n", a, b);
}

int main() {
    int a = 5;
    int b = 10;

    swapValue(a,b);
    swapReference(&a,&b);

    return 0;
}