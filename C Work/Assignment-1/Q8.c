/* Q8. WAP to print below mentioned pattern: 
1  
01  
101  
0101  
10101*/
#include <stdio.h>
int main() {
    int a=0,b=1,i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2==0){
                printf("%d",b);
            }else{
                printf("%d",a);
                }
        }printf("\n");
    }
    return 0;
}
