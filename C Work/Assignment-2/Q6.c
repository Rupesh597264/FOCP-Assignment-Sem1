// Q6. WAP to find average score of the Marks array. 
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter no. of students = ");
    scanf("%d",&n);
    int marks[n],i,sum=0;
    float avg;
    printf("Enter marks of %d students = ",n);
    for(i=0;i<n;i++)
    scanf("%d",&marks[i]);
    for(i=0;i<n;i++){
    sum=sum+marks[i];
    }
    avg=(float)sum/n;
    printf("Average of all the marks provided in the above array = %f",avg);
    return 0;
}
