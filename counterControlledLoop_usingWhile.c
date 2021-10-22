#include <stdio.h>
int main(){
    int i=1,marks,sum=0;
    printf("Enter your marks:\n",marks);
    while(i<=10)
    {
        scanf("%d",&marks);
        sum=sum+marks;
        i++;
    }
    printf("Sum = %d\n", sum);
    printf("Average = %d\n", sum/10);

    return 0;

}