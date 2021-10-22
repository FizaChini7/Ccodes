#include<stdio.h>
int main()
{
   int number,counter;
   scanf("%d", &number);
   for(counter=0;counter<=10;counter++)
   {
      printf("%d*%d=%d\n",number,counter,number*counter);
   }
   return 0;
}
