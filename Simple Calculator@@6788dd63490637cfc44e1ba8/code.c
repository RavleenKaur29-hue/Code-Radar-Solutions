#include <stdio.h>

int main() {
    int a, b;
    char op;

    // Prompt for user input
    printf("");
    
    // Input two integers and operator
    if (scanf("%d %d %c", &a, &b, &op) != 3) {
        printf("Error\n");
        return 1;
    }

    // Perform operation based on operator
    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%.0f\n", a / (float)b);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error\n");
    }

    return 0;
}
