#include<stdio.h>
 double TRIANGLEAREA(double a,double b){//argument main er agai lekle perameter na likleo hoi
     return 0.5*a*b;

 }

int main(){
    double base,height;
    printf("ENTER BASE: ");
    scanf("%lf",&base);
    printf("ENTER HEIGHT: ");
    scanf("%lf",&height);

    double area=TRIANGLEAREA(base,height);
    printf("AREA: %.lf",area);

return 0;
}
