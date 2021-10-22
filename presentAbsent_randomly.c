#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 50
int main(){
 srand(time(NULL));
 int i,j,counter;
 int a[SIZE];
       for(j=0; j<SIZE; j++){

       a[j]=1+(rand()%50);

       printf("%d  ",a[j]);}

 printf("\n\nENTER SOME NUMBER BETWEEN (1-50)\n\t\tOR\nSTOP THIS PROCESS ENTER (-1):\n");

      scanf("%d",&i);

        while(i!=-1)
        {
 counter=0;

 for(j=0; j<SIZE; j++)
 {
 if(i==a[j]){

 counter++;
 }
 }
 if(counter>0)
 {
   printf("PRESENT\n");
   }
 else
   printf("ABSENT\n");

   scanf("%d",&i);
   }
 return 0;
 }
