// Q3.  WAP to subtract two integers without using Minus (-) operator. 
#include <stdio.h>
#include <math.h>
int main() {
    int a,b,Subtraction;
    printf("Enter first no. = ");
    scanf("%d",&a);
    printf("Enter second no. = ");
    scanf("%d",&b);
    Subtraction=a+~b+1;
    printf("Subtraction of two no. without using minus sign = %d",Subtraction);
    
    return 0;
}