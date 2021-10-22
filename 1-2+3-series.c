#include<stdio.h>
int main(){
    int num,i,even=0,odd=0;
    printf("ENTER THE LAST TERM: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(i%2==0){
                even=even+i;
        }
        else{
            odd=odd+i;
        }
    }
    printf("sum =%d\n",odd-even);

return 0;
}
