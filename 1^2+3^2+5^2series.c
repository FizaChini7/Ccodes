#include<stdio.h>
int main(){
    int num,i,sum=0;
    printf("ENTER N: ");
    scanf("%d",&num);
    for(i=1;i<=num;i=i+2){
        sum=sum+i*i;
    }
    printf("sum = %d\n",sum);

return 0;

}
