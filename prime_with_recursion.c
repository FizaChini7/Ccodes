int PRIME(int NUMBER,int i){
    if(i==1)
        return 1;//jokhn 1 call hobe tohkn function stop hoye jabe

    if(NUMBER%i==0)
    return 0;
    return PRIME(NUMBER,i-1);
}
int main()
{
    int n,p;
    printf("ENTER ANY NUMBER:");
    scanf("%d",&n);
    p=PRIME (n,n/2);
    if(p==1){
        printf("%d is a prime number",n);
    }
    else{
        printf("%d is not a prime number",n);
    }
    return 0;
}
