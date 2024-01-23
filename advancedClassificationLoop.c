#include "NumClass.h"
#define FALSE 0
#define TRUE 1

    /* will return if a number is Armstrong number
    An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
    For Example: 407 = 4^3 + 0^3 + 7^3 = 64 + 0 + 343 = 407
    */
    // test1
    int power(int num, int power){
      int sum = 1;
      if(power == 0){
        return 1;
      }
      for(int i=0;i<power;i++){
         sum *= num;
      }
      return sum;
    }

    //returns the number of digits in num
    int length(int x){
        if (x == 0) {
            return 1; // Special case for 0
        }
        int count = 0;
        while (x > 0) {
            count++;
            x /= 10;
        }
        return count;
    } 

    int isArmstrong(int x){
        if (x < 0) {
            return FALSE; // or return 0; amstrong number isn't negative 
        }
        int powerOfX = length(x);
        int sumOfPowers = 0;
        int tempx = x;
        while (x > 0) {
            sumOfPowers += power(x%10,powerOfX);
            x /= 10;
        }
        if (sumOfPowers == tempx) {
            return TRUE; // Strong number
        }
        return FALSE; // Not a strong number
    }
    

    /* will return if a number is a palindrome */
    int isPalindrome(int x){
        if (x < 0) {
            return FALSE; // or return 0; if negative numbers are considered non-palindromic
        }
        int tempx = x;
        while(length(tempx)>1){
            int right = tempx%10;
            int left = tempx/(power(10,length(tempx)-1));
            if (right!= left){
                return FALSE;
            }
            tempx = tempx% power(10,length(tempx)-1);
            tempx = tempx/10;
        }
        return TRUE;

    }
   
