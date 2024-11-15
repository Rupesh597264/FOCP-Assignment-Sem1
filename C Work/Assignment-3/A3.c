/* Simple Calculator is a C language-based application used for performing all the simple arithmetic operations like addition, multiplication, division, and subtraction. The application can be made using basic knowledge of C like if-else statements, loops, etc.  
The functionalities of the application are mentioned below: 
1. Addition 
2. Subtraction 
3. Multiplication 
4. Division 
5. Logarithmic values 
6. Square roots*/
#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    float num1,num2,result;
    printf("Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Logarithmic value\n");
    printf("6. Square root\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        printf("Enter two no. = ");
        scanf("%f %f",&num1,&num2);
        result=num1+num2;
        printf("Addition of two no is = %f",result);
        break;
        case 2:
        printf("Enter two no. = ");
        scanf("%f %f",&num1,&num2);
        result=num1-num2;
        printf("Subtraction of two no is = %f",result);
        break;
        case 3:
        printf("Enter two no. = ");
        scanf("%f %f",&num1,&num2);
        result=num1*num2;
        printf("Multiplication of two no is = %f",result);
        break;
        case 4:
        printf("Enter two no. = ");
        scanf("%f %f",&num1,&num2);
        if (num2 != 0) {
                    result = num1 / num2;
                    printf("Division of two no is = %f",result);
            } else {
                    printf("Error: Division by zero is not allowed.\n");
            }
        break;
        case 5:
        printf("Enter no. = ");
        scanf("%f",&num1);
        if (num1 > 0) {
                    result = log(num1);  
                    printf("Logarithmic value =  %f\n", result);
            } else {
                    printf("Error: Logarithm of non-positive numbers is undefined.\n");
            }
        break;
        case 6:
        printf("Enter no. = ");
        scanf("%f",&num1);
        if (num1 >= 0) {
                    result = sqrt(num1);
                    printf("Sqaure root = %f\n", result);
            } else {
                    printf("Error: Square root of negative numbers is not defined in real numbers.\n");
            }
        break;
        case 7:
        printf("Exiting the calculator");
        break;
        default:
        printf("Invalid choice. try again.\n");
        break;
    }
    return 0;
}
