#include <stdio.h>

int main() {
    int a, b;
    char op;

    // Prompt for user input
    printf("Enter two integers and an operator (+, -, *, /): ");
    
    // Input two integers and operator
    if (scanf("%d %d %c", &a, &b, &op) != 3) {
        printf("Invalid input\n");
        return 1;
    }

    // Perform operation based on operator
    switch (op) {
        case '+':
            printf("Result: %d\n", a + b);
            break;
        case '-':
            printf("Result: %d\n", a - b);
            break;
        case '*':
            printf("Result: %d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("Result: %.2f\n", a / (float)b);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}
