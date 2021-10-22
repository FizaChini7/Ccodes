#include<stdio.h>
 void PRIME_NUMBER()
{
    int n;

    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    int counter=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            counter++;
        }
    }
    if(counter==2){
        printf("NUMBER IS PRIME\n");
    }

    else{
        printf("NUMBER IS NOT PRIME");
    }

}
void main(){
    PRIME_NUMBER();
    return 0;

}
