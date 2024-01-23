#include <stdio.h>
#include "NumClass.h"

// test1
// // Function prototypes
// int isPrime(int num);
// int isArmstrong(int num);
// int isStrong(int num);
// int isPalindrome(int num);

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2); // Read two integers

    printf("\nThe Armstrong numbers are: ");
    for (int i = num1; i <= num2; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\nThe Palindromes numbers are: ");
    for (int i = num1; i <= num2; i++) {
        if (isPalindrome(i)) {
            printf("%d ", i);
        }
    }
    printf("\nThe Prime numbers are: ");
    for (int i = num1; i <= num2; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\nThe Strong numbers are: ");
    for (int i = num1; i <= num2; i++) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }

    return 0;

}

