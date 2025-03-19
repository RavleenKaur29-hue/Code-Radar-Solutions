#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    if (num == 2 || num == 3) {
        return 1; // 2 and 3 are prime numbers
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return 0; // Numbers divisible by 2 or 3 are not prime
    }

    // Check divisibility from 5 to the square root of num
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return 0; // If divisible by i or i+2, it's not prime
        }
    }
    return 1; // If no divisors found, it's prime
}

int main() {
    int t;
    scanf("%d", &t); // Number of test cases
    while (t--) {
        int num;
        scanf("%d", &num); // Input number to check
        printf("%d\n", isPrime(num)); // Output 1 if prime, 0 otherwise
    }
    return 0;
}