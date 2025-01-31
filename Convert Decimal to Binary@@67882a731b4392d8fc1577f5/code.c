#include <stdio.h>

int main() {
    int n, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (n > 0) {
        binary[i] = n % 2;  // Store remainder (0 or 1)
        n /= 2;             // Divide number by 2
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]); // Print in reverse order
    }
    printf("\n");

    return 0;
}

