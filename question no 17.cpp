#include <stdio.h>

// Global array of integers
int arr[10] = {3, 7, 10, 15, 17, 20, 23, 30, 41, 50};

// Function to check if a number is prime
int is_prime(int num) {
    if (num < 2) {
        return 0; // Not a prime number
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

// User-defined function to calculate the sum of prime numbers
int sum_of_primes() {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        if (is_prime(arr[i])) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    // Calculate and display the sum of prime numbers
    int prime_sum = sum_of_primes();
    printf("The sum of prime numbers in the array is: %d\n", prime_sum);

    return 0;
}

