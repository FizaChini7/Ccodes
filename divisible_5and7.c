#include<stdio.h>

int Range(int a,int b){
    int i,counter=0;
    for(i=a;i<=b;i++){
        if(i%5==0 && i%7==0){
            counter++;
        }
    }
    return counter;
}

 int main()
{
    int n1,n2;
    printf("ENTER THE NUMBER OF RANGE: ");
    scanf("%d%d",&n1,&n2);
    printf("\nCOUNT OF NUMBERS THAT ARE DIVISIBLE BY 5 AND 7 : %d\n",Range(n1,n2));

    return 0;
}

