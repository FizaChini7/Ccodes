#include<stdio.h>
int main(){
    int num,i=1,fact=1;
    printf("ENTER ANY POSITIVE NUMBER: ");
    scanf("%d",&num);
    while (i<=num){
        fact = fact * i;
    i++;
    }
    printf("%d\n",fact);
    return 0;
}

