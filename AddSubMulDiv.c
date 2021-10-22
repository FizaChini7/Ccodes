#include<stdio.h>
int main()
{
    int m,n,cha;
    printf("Enter two number : ");
    scanf("%d%d",&m,&n);
    printf("Press 1 for Addition\n");
    printf("Press 2 for Substraction\n");
    printf("Press 3 for Multiplication\n");
    printf("Press 4 for Division\n");
    printf("Press 5 for Modulo\n");
    scanf("%d",&cha);
    switch(cha)
    {
        case 1:
            printf("Addition= %d", m+n);
        break;
        case 2:
            printf("Substraction= %d", m-n);
        break;
        case 3:
            printf("Multiplication= %d", m*n);
        break;
        case 4:
            printf("Division= %d", m/n);
        break;
        case 5:
            printf("Modulo= %d", m%n);
        break;

    }
    return 0;
}
