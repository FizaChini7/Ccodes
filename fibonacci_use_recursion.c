#include<stdio.h>
int fibo(int a);
int main(){
    int n,i;
    printf("HOW MANY FIBONACCI NUMBERS:\n");
    scanf("%d",&n);
  printf("FIBONACCI NUMBERS:\n");
    for(i=0;i<n;i++){
        printf("%d\t",fibo(i));
        }

    return 0;
}

int fibo (int a){
    if(a==0 || a==1)
        return a;
    else
        return (fibo(a-1) + fibo(a-2));

}
