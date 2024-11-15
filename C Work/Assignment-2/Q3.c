// Q3. WAP to find who scored first “99” in an array marks. 
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
    if(marks[i]==99){
        printf("%d no. Student first scored %d marks in the class ",i+1,marks[i]);break;
    }
    }
    return 0;
}
