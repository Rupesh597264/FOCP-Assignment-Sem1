// Q5. To check wether a no. is a perfect no. or not
#include <stdio.h>
#include <math.h>
int main(){
    int num,i,sum;
    printf("Enter a num = ");
    scanf("%d",&num);
    for(i=1;i<num;i++){
        if(num%i==0){
            sum=sum+i;}
        }if(num==sum){
            printf("Number is a perfect number");
        }else{
            printf("Number is not a perfect number");}
     return 0;
}