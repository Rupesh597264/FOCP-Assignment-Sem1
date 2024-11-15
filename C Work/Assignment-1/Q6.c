/* Q6. WAP to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies. Test Data: 7 9  Expected Output: The coordinate point (7,9) lies in the First quadrant.*/
#include <stdio.h>
int main() {
    int x,y;
    printf("enter x coordinate = ");
    scanf("%d",&x);
    printf("enter y coordinate = ");
    scanf("%d",&y);
    printf("Coordinates are = (%d,%d)",x,y);
    if(x>0&&y>0){
        printf("\nThe coordinate point (%d,%d) lies in the First quadrant.",x,y);
    }
    else
    if(x<0&&y>0){
        printf("\nThe coordinate point (%d,%d) lies in the second quadrant.",x,y);
    }
    else
    if(x<0&&y<0){
        printf("\nThe coordinate point (%d,%d) lies in the third quadrant.",x,y);
    }
    else
    if(x>0&&y<0){
        printf("\nThe coordinate point (%d,%d) lies in the fourth quadrant.",x,y);
    }
    else{
        printf("\nThe coordinate point (0,0) lies in the fourth quadrant.");
    }  return 0; 
    }