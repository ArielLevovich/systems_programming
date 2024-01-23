#include "NumClass.h"
#define FALSE 0
#define TRUE 1

//tets1
/* will return if a number is prime*/
    int isPrime(int x){
       if(x < 1){
         return FALSE;
       }
       int i = 2;
       while(i<=x/2){
         if (x%i == 0){
            return FALSE;
         }
         i++;
       } 
       return TRUE;
    }
    int factorial(int num){
        if(num == 0){
            return 1;
        }
        int i = 1;
        int factorial = num;
        while(num>i){
            factorial *= num-i;
            i++;
        }
        return factorial;
    }
    /*Strong number is a special number whose sum of the factorial of digits is equal to the original
    number. For Example: 145 is strong number
    1! + 4! + 5! = 145
    */
    int isStrong(int x){
    if (x <= 0) {
        return FALSE; // <=0 is not considered a strong number
    }
    int sumOfFactorials = 0;
    int tempx = x;
    while (x > 0) {
        int div = x % 10;
        sumOfFactorials += factorial(div);
        x /= 10;
    }
    if (sumOfFactorials == tempx) {
        return TRUE; // Strong number
    }
    return FALSE; // Not a strong number
    }

