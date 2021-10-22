#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
     int number,Dice1,Dice2;
     srand(time(0));

    printf("ENTER A NUMBER BETWEEN 1 and 6: ");
    scanf("%d",&number);
      Dice1=1+(rand()%6);
      Dice2=1+(rand()%6);
    printf("\nTHE FIRST DICE IS %d\n\n",Dice1);
    printf("THE SECOND DICE IS %d\n",Dice2);
    if(number==Dice1 && number==Dice2){
    printf("\nYou WIN THE GAME!!!");
    }
    else{printf("\nYou LOST THE GAME\n\a");
    }

    return 0;
}