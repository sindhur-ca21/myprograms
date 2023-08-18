#include <stdio.h>
   int factorial(int n) {
     if(n==1) {
     return 1;
     }
     else {
     return factorial (n-1)*n;
    }
   }
   int main() {
     int n;
     printf("enter a value:");
     scanf("%d",&n);
     printf("the Factorial value n is: %d",factorial(n));
     return 0;
    }
