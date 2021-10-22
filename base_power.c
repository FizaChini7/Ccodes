#include <stdio.h>

int Power(int b,int power) {
    if (power == 1)

        return b;
        return (b * Power(b, power - 1));
}

int main() {
    int base,exponent,p;
    printf("ENTER BASE VALUE:");
    scanf("%d",&base);
    printf("\nENTER POWER VALUE:");
    scanf("%d",&exponent);
       p = Power(base,exponent);
    printf("\n%d^%d = %d is the value\n\a", base,exponent,p);
    return 0;
}
