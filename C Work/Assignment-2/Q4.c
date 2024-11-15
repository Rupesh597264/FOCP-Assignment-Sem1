// Q4. WAP to find Who & how many students have scored 99 in an array Marks. 
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter no. of students = ");
    scanf("%d",&n);
    int marks[n],i,count=0;
    printf("Enter marks of n students = ");
    for(i=0;i<n;i++)
    scanf("%d",&marks[i]);
    for(i=0;i<n;i++){
    if(marks[i]==99){
        printf("%dth Student scored %d marks in the class ",i+1,marks[i]);printf("\n");count++;
    }
    }printf("%d Students scored 99 in the class",count);
    return 0;
}
