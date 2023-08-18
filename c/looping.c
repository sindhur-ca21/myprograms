#include <stdio.h>
int main() {
   int x,fact=1,n;
   printf("enter the number:");
   scanf("%d",&n);
     for(x=1;x<=n;x++) {
       fact=fact*x;
      }
   printf("to find the factorial value is: %d",fact);
   return 0;
 }
