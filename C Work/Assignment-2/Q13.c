/*Q13. Given an array, the task is to cyclically rotate the array clockwise by one time. 
Examples:   
Input: arr[] = {1, 2, 3, 4, 5}  
Output: arr[] = {5, 1, 2, 3, 4} 
Input: arr[] = {2, 3, 4, 5, 1} 
Output: {1, 2, 3, 4, 5}*/
#include <stdio.h>
int main() 
{
    //ques13
    int p,n;
    printf("Enter the number of Elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Elements of the Array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d: ",i+1);
        scanf("%d",&a[i]);
    }
    int l=a[n-1];
    for(int i=n;i>=0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=l;
    printf("New Array after Rotation:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d: %d\n",i+1,a[i]);
    }
    return 0;
}	
