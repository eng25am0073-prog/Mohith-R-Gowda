#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Ask the user for input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform addition
    sum = num1 + num2;

    // Display result
    printf("Sum = %d\n", sum);

    return 0;
}
