#include <stdio.h>
#include <string.h>

int main() {
    char input[100], str1[50], str2[50];

    printf("Enter two strings: ");
    fgets(input, sizeof(input), stdin); // Take the full line input

    // Split the input into two strings
    sscanf(input, "%s %s", str1, str2);

    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);

    return 0;
}
