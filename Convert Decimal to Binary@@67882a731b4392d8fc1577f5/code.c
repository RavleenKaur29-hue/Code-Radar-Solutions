#include <stdio.h>
int main() {
    int n, remainder;
    long long binary = 0, place = 1;  
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    while (n > 0) {
        remainder = n % 2;    
        binary += remainder * place; 
        n /= 2;               
        place *= 10;          
    }
    printf("Binary: %11d\n", binary);
    return 0;
}
