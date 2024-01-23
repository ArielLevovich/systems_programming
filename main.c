#include <stdio.h>
#include "NumClass.h"

// // Function prototypes
// int isPrime(int num);
// int isArmstrong(int num);
// int isStrong(int num);
// int isPalindrome(int num);


int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2); // Read two integers

    printf("Prime numbers: ");
    for (int i = num1; i <= num2; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\nArmstrong numbers: ");
    for (int i = num1; i <= num2; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\nStrong numbers: ");
    for (int i = num1; i <= num2; i++) {
        if (isStrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\nPalindromes: ");
    for (int i = num1; i <= num2; i++) {
        if (isPalindrome(i)) {
            printf("%d ", i);
        }
    }

}

