#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to calculate Fibonacci sequence
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate factorial
    int factorial_result = factorial(num);

    printf("Factorial of %d = %d\n", num, factorial_result);

    // Calculate Fibonacci sequence
    printf("Fibonacci sequence up to %d terms:\n", num);
    for (int i = 0; i < num; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    
    return 0;
}
