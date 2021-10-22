#include<stdio.h>
int main(){
    int num,i,sum=0;
    printf("ENTER A NUMBER: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum=sum+i*i;
    }
    printf("%d\n",sum);
    return 0;

}