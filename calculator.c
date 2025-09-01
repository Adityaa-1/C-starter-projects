#include <stdio.h>
int main(){
    
    char operator;
    float a;
    float b;
    printf("Enter operator here (+, -, *, /):");
    scanf("%c", &operator);
    
    printf("Enter first number here:");
    scanf("%f", &a);
    
    printf("\n");
    
    printf("Enter second number here:");
    scanf("%f", &b);
    
     if(b==0){
            printf("Invalid input");
        }
    
    switch(operator){
        case '+':
        printf("%.2lf + %.2lf = %.2lf", a, b, a+b);
        break;
        
        
        case '-':
        printf("%.2lf - %.2lf = %.2lf", a, b, a-b);
        break;
        
        case'*':
        printf("%.2lf * %.2lf = %.2lf", a, b, a*b);
        break;
        
        case'/':
        printf("%.2lf / %.2lf = %.2lf", a, b, a/b);
        break;
        
    }
        
       
    
    return 0;
}
