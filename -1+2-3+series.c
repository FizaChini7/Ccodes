#include<stdio.h>
int main(){
    int num,i,even=0,odd=0;
    printf("Enter the last term:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(i%2==0){
            even=even+i;
        }
        else{
            odd=odd+i;
        }
    }
    printf("sum = %d\n",even-odd);

return 0;

}
