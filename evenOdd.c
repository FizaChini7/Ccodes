#include<stdio.h>
int main(){
    int number;
    printf("Enter a number:\n");
    scanf("%d",&number);
    if((number%2)==0)
    printf("%d is an even number\n",number);


    if((number%2)!=0)
    printf("%d is an odd number",number);
    return 0;

}