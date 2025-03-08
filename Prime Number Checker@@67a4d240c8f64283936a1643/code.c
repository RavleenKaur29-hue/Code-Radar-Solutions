#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    if (num == 2) {
        return 1; 
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int num;
        scanf("%d", &num); 

        if (isPrime(num)) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }

    return 0;
}