#include <stdio.h>

// Function to calculate factorial
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    int i;

    // Calculate factorial
    for (i = 1; i <= n; ++i) {
        fact *= i;
    }

    return fact;
}

int main() {
    int num;
    unsigned long long fact;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Validate if the number is negative
    if (num < 0) {
        printf("Factorial of negative number doesn't exist.\n");
    } else {
        // Calculate factorial
        fact = factorial(num);
        printf("Factorial of %d = %llu\n", num, fact);
    }

    return 0;
}
