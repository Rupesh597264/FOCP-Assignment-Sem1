// Q2. WAP to print grade of students as per their marks given in an array. (>=75-- A grade, 74 to 60--B Grade, 59 to 40--C grade below 40--D grade). 
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter no. of students = ");
    scanf("%d",&n);
    int marks[n],i;
    printf("Enter marks of %d students = ",n);
    for(i=0;i<10;i++)
    scanf("%d",&marks[i]);
    for(i=0;i<10;i++){
    if(marks[i]>=75){
        printf("%d A grade",marks[i]);
    }else
    if(marks[i]<75&&marks[i]>=60){
        printf("%d B grade",marks[i]);
    }else
    if(marks[i]<60&&marks[i]>=40){
        printf("%d C grade",marks[i]);
    }else
    if(marks[i]<40){
        printf("%d D grade",marks[i]);
    }printf("\n");
    }
    return 0;
}
