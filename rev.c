#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;          // Get last digit
        reversed = reversed * 10 + remainder;  // Build reversed number
        num /= 10;                     // Remove last digit
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}

