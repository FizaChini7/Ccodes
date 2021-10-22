#include<stdio.h>
int main(){
    int row,space,asterisk;//asterisk bolte * ke bujhano hoi.

    for(row=1;row<=5;row++){
            for(space=1;space<=5-row;space++)
                printf(" ");

            for(asterisk=1;asterisk<=2*row-1;asterisk++)
                printf("*");

            printf("\n");}

    for(row=4;row>=1;row--){
        for(space=1;space<=5-row;space++)
            printf(" ");

        for(asterisk=1;asterisk<=2*row-1;asterisk++)
            printf("*");


        printf("\n");}
printf("\n");

return 0;

    }//1


