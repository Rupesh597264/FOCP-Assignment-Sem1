// Q1.WAP to increase every student mark by 5 & then print the updated array. 
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter no. of students = ");
    scanf("%d",&n);
    int marks[n],i;
    printf("Enter marks of %d students = ",n);
    for(i=0;i<n;i++)
    scanf("%d",&marks[i]);
    for(i=0;i<n;i++){
    printf("Updated Marks after adding 5 marks to marks of each student %d",marks[i]+5);
    printf("\n");}
    return 0;
}
