#include <stdio.h>


int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int findMax(int a, int b) {
    return (a > b) ? a : b;
}


int compute(int x, int y, int (*operation)(int, int)) {
    return operation(x, y);
}

int main(void) {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int sum     = compute(num1, num2, add);
    int product = compute(num1, num2, multiply);
    int maximum = compute(num1, num2, findMax);

    printf("Sum     = %d\n", sum);
    printf("Product = %d\n", product);
    printf("Maximum = %d\n", maximum);

    return 0;
}