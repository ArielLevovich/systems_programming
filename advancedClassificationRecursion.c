#include "NumClass.h"
#define FALSE 0
#define TRUE 1


    //test1
    // returns num^power (recursivly)
    int power(int num, int p) {
        if (p == 0) {
            return 1;
        }
        return num * power(num, p - 1);
    }


    //returns the number of digits in num (recursivly)
    int length(int x) {
        if (x == 0) {
            return 0;
        }
        return 1 + length(x / 10);
    }
    
    int calcArmstrong(int x, int len) { //helper function for isArmstrong
        if (x == 0) {
            return 0;
        }
        return power(x % 10, len) + calcArmstrong(x / 10, len);
    }

    /* will return if a number is Armstrong number
    An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
    For Example: 407 = 4^3 + 0^3 + 7^3 = 64 + 0 + 343 = 407
    */
    int isArmstrong(int x) {
        if (x < 0) {
            return FALSE; // amstrong number isn't negative
        }
        int len = length(x);
        if (calcArmstrong(x, len) == x) {
            return TRUE; // or return 1;
        }
        return FALSE; // or return 0;
    }


    int reverseOrder(int num, int newnum){ //helper function for isPalindrom (recursivly)
    if (num < 10) {
        return newnum * 10 + num;
    }
    return reverseOrder(num / 10, newnum * 10 + num % 10);
    }


    /* will return if a number is a palindrome */
    int isPalindrome(int x) {
    if (x < 0) {
        return FALSE; // negative numbers are considered non-palindromic
    }
    if (reverseOrder(x, 0) == x) {
        return TRUE; // or return 1;
    }   
    return FALSE; // or return 0;
    }







