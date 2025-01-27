#include<stdio.h>

int main() {
    int b, c;
    char a;

    // Input two integers and an operator
    printf("Enter two integers and an operator: ");
    scanf("%d %d %c", &b, &c, &a); // This will read the integers and operator

    switch(a) {
        case '+':
            printf("%d\n", b + c);
            break;
        case '-':
            printf("%d\n", b - c);
            break;
        case '*':
            printf("%d\n", b * c);
            break;
        case '/':
            if (c != 0) {
                printf("%d\n", b / c);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}
