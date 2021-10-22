#include<stdio.h>
int i;

int Prime(int n)
{
    if(i==1) {
        return 1;
        }
     else if(n%i == 0){
        return 0;
        }
    else {
        i = i-1;
        Prime(n);
    }
}
int main()
{

    int n1,c;

    printf("ENTER A NUMBER: ");
    scanf("%d",&n1);

    i = n1/2;

    c = Prime(n1);

    if(c==1)
        printf("\n%d IS A PRIME NUMBER.\n\a",n1);
    else
        printf("\n%d IS NOT A PRIME NUMBER.\n\a",n1);
    return 0;
}