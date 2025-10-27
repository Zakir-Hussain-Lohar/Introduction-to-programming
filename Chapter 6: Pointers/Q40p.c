#include <stdio.h>

// Function declaration
void dowork(int a, int b, int *sum, int *product, int *avg);

int main() {
    int a = 3, b = 5;
    int sum, prod, avg;
    dowork(a, b, &sum, &prod, &avg);
    printf("sum = %d\nprod = %d\navg = %d\n", sum, prod, avg);
    return 0;
}

// Function definition - OUTSIDE main function
void dowork(int a, int b, int *sum, int *product, int *avg) {
    *sum = a + b;
    *product = a * b;
    *avg = (a + b) / 2;
}