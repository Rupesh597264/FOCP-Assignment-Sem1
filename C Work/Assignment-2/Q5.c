// Q5. WAP to find sum of all scores in Marks array. 
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter no. of students = ");
    scanf("%d",&n);
    int marks[n],i,sum=0;
    printf("Enter marks of %d students = ",n);
    for(i=0;i<n;i++)
    scanf("%d",&marks[i]);
    for(i=0;i<n;i++){
    sum=sum+marks[i];
    }printf("Sum of all the marks provided in the above array = %d",sum);
    return 0;
}
