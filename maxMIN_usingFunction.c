#include<stdio.h>
    int maximum(int x,int y,int z);//parameter eta main er moddheo deoya jai.na dileo hoi,maybe.dile very good
    int minimum(int x,int y,int z);
    int maximum(int x,int y,int z)//argument
    {
        int max=x;
        if(y>max)
        {
            max=y;
        }
        if(z>max)
        {
            max=z;
        }
        return max;

    }
    int minimum(int x,int y,int z)//argument
    {
        int min=x;
        if(y<min)
        {
            min=y;
        }
        if(z<min)
        {
            min=z;
        }
        return min;


    }
    int main()
{

    int n1,n2,n3;

    printf("ENTER THREE NUMBER: ");
    scanf("%d%d%d",&n1,&n2,&n3);

    printf("Maximum is %d\n",maximum(n1,n2,n3));//calling
    printf("Minimum is %d\n",minimum(n1,n2,n3));
return 0;}
