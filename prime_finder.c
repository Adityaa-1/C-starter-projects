#include <stdio.h>

int main() {

   int i=2;
   int prime=1;
   int n;

   scanf("%d", &n);

   if (n==0 || n==1){
    prime = 0;
   }

   else{

   while(i<n){
    
    if(n%i==0){
        prime=0;
        break;
    }
    i++;

   }
}

   if (prime){ // this gives the default value of prime i.e. 1
    printf("%d is a prime number", n);
   }
   else{
   printf("%d is not a prime number", n);
   }
   
    
    return 0;

}