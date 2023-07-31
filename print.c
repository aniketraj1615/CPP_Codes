#include<stdio.h>
int isPalindrome(int n)//a bool function which return true if number is palindrome otherwise it will retuen false
{               
    int a=0;         // using a as a flag
    int reverse = 0; //to store the reverse of the given number
    int remainder = 0;

    int n1 = n; //storing the original number for comparing later
    //logic to compute the reverse of a number
    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    if (reverse == n1)
        return (a+1);
    else
        return a;
}

int main(){

    int count,n=10000;
    
    printf("List of all prime-palindromes from 1 to 10000: ");
    for(int num = 1;num<=n;num++){ //for loop for itrating each number between 1 to 10000 or n

         count = 0;

         for(int i=2;i*i<= num;i++){  // 1 is not a prime number that's why starting from 2 .
             if(num%i==0){           //a prime number is only divible by 1 and by its self ,if a number is divisible by other than these two numbers than that will not be a prime number that's
                 count++;
                 break;             //here we are breaking after the first time getting the condition that num is divisible by i hence it is not a prime number,so no need to go for other itrations
             }
        }
        
         if(count==0 && num!= 1&&(isPalindrome(num)))  //here we are checking that num is not equal to 1 because 1 is not a prime number and simultaneously  checking that number is palindrome or not by calling the ispalindrome function,we are also checking that count must be zero so that num is prime
             printf("%d ",num);
    }
    printf("\n");
  
   return 0;
}