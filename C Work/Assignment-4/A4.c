#include <stdio.h>
#include <stdlib.h>
int main() 
{
    char user;
    int comp, score=0;
    printf("Rock Paper Scissors Game\n");
    printf("Enter R for Rock, P for Paper, S for Scissors\n");
    scanf("%c",&user);
    comp=rand()%3;
    // 0 for Rock, 1 for Paper, 2 for Scissors
    switch(user)
    {
        case 'R':
        printf("Your Choice:Rock\n");
        if(comp==0)
        printf("Computer's Choice:Rock\nIt's a DRAW");
        else if(comp==1)
        printf("Computer's Choice:Paper\nOHH NO! YOU LOST");
        else if(comp==2)
        printf("Computer's Choice:Scissors\nYAAY! YOU WON");
        break;
        case 'P':
        printf("Your Choice:Paper\n");
        if(comp==0)
        printf("Computer's Choice:Rock\nYAAY! YOU WON");
        else if(comp==1)
        printf("Computer's Choice:Paper\nIt's a DRAW");
        else if(comp==2)
        printf("Computer's Choice:Scissors\nOHH NO! YOU LOST");
        break;
        case 'S': 
        printf("Your Choice:Scissors\n");
        if(comp==0)
        printf("Computer's Choice:Rock\nOHH NO! YOU LOST");
        else if(comp==1)
        printf("Computer's Choice:Paper\nYAAY! YOU WON");
        else if(comp==2)
        printf("Computer's Choice:Scissors\nIt's a DRAW");
        break;
        default: printf("Invalid input\n");
    }
    return 0;
}
