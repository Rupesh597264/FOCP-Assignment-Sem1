// Q2. To read two integers and print thier HCF
#include <stdio.h>
#include <math.h>
int main() {
    int a,b,i;
    printf("Enter first no. = ");
    scanf("%d",&a);
    printf("Enter second no. = ");
    scanf("%d",&b);
    if(a<b){
        for(i=a;i>=1;i--){
            if(a%i==0&&b%i==0){
                printf("HCF = %d",i);
                break;
            }
        }
    }
    else{
        for(i=b;i>=1;i--){
            if(a%i==0&&b%i==0){
                printf("HCF = %d",i);
                break;
            }
        }
    }
    return 0;
}
