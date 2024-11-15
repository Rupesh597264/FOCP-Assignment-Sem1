/*Q14. Given an array of n integers. The task is to print the duplicates in the given array. 
If there are no duplicates then print -1. 
Examples:  
Input: {2, 10,10, 100, 2, 10, 11,2,11,2} 
Output: 2 10 11 
Input: {5, 40, 1, 40, 100000, 1, 5, 1} 
Output: 5 40 1*/
#include <stdio.h>
int main() 
{
    //ques14
    int count=0;
    int a[15]={67,69,86,69,92,45,34,62,86,56,72,92,35,66,45};
    printf("the Duplicate Elements are:\n");
    for(int i=0;i<15;i++)
    {
        for(int j=0;j!=i;j++)
        {
            if(a[j]==a[i])
            printf("%d,",a[j]);
        }
    }
    return 0;
}
