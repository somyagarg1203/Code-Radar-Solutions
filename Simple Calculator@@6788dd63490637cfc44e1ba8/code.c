#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    float result;

    // Taking input for the two numbers and the operator
    scanf("%d %d %c", &num1, &num2, &operator);

    // Performing the calculation based on the operator
    if (operator == '+') {
        result = num1 + num2;
    } else if (operator == '-') {
        result = num1 - num2;
    } else if (operator == '*') {
        result = num1 * num2;
    } else if (operator == '/') {
        if (num2 != 0) {
            result = (float) num1 / num2;
        } else {
            printf("Error: Division by zero is not allowed.\n");
            return 1;
        }
    } else {
        printf("Error: Invalid operator.\n");
        return 1;
    }


    return 0;
}