// Q9. WAP to find a peak element which is not smaller than its neighbors. 
#include <stdio.h>

int main() {
    int i,n;
    printf("Enter the no. of elements to be entered = ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements = ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if((i == 0 || arr[i] >= arr[i - 1]) && 
            (i == n - 1 || arr[i] >= arr[i + 1])){
           printf("Peak element in array is = %d",arr[i]);
           break;
        }
       }
      return 0;
}
