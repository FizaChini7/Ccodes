#include<stdio.h>
int main(){
    int n,n1;
    printf("ENTER FIRST NUMBER:");
    scanf("%d",&n);
    printf("ENTER SECOND NUMBER:");
    scanf("%d",&n1);
    printf("LCM=%d",lcm(n,n1));

}
int lcm (int a,int b){
    static int m=0;
    m=m+b;
    if(m%a==0 && m%b==0)
        return m;
    return lcm(a,b);

}
