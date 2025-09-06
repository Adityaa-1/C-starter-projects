#include <stdio.h>

// function prototype
int factorial(int);

//function definition
int factorial(int n){
    if(n==1 || n==0){
        return 1;            //to make it finite
    }
    return factorial(n-1)*n; //recursion
}

int main() {
    printf("Enter number here:");
    int n;
    scanf("%d", &n);
    printf("The factorial of %d is %d", n, factorial(n));
    return 0;

}