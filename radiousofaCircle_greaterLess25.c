#include<stdio.h>
int AREA(float a);
float Radious_Of_Circle(float r)
{
    return 3.1416 * r * r;
}

int main()
{

    float Area,Radious;
    printf("RADIOUS OF A CIRCLE: ");
    scanf("%f",&Radious);
    Area = Radious_Of_Circle(Radious);
    AREA(Area);
    return 0;
}
int AREA(float a)
{
    if(a > 25){
        printf("\nGREATER THAN 25\n");
        }
    if(a < 25){
    printf("\nLESS THAN 25\n");
    }
    return a;
}
