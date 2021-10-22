#include<stdio.h>
int main(){
    int row,col,num;
    printf("Enter N: ");
    scanf("%d",&num);
    for(row=1;row<=num;row++){
        for(col=1;col<=num;col++){
            if(row==1 || row==num || col==1 || col==num){
                printf("*");}
            else{
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;

}