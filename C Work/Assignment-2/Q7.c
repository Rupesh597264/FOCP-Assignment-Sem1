// Q7. WAP to check whether score is even or odd in an array. 
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter no. of scores = ");
    scanf("%d",&n);
    int score[10],i;
    printf("Enter %d scores = ",n);
    for(i=0;i<n;i++)
    scanf("%d",&score[i]);
    for(i=0;i<n;i++){
    if(score[i]%2==0){
        printf("%d-Even Score",score[i]);
    }else{
        printf("%d-Odd score",score[i]);
    }printf("\n");
    }
    return 0;
}
