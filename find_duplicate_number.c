#include<stdio.h>
 int main(){
 int n,a[1000],i=1,j,k,number=0,counter=0;
 printf("ENTER THE NUMBERS:\n");
 scanf("%d",&n);
while(n!=-1)
{
    a[i++]=n;
    scanf("%d",&n);
}
 for(j=1;j<i;j++)
 {
  for(k=j+1;k<i;k++)
  {
 if(a[j]==a[k])
 {
 number=a[j];
 }
 }
 if(a[j]==number)
 {
 counter++;
 }
 }
 if(number==0)
 {
 printf("\n-1\a");
 }
 else{
 printf("\n%d is a duplicate value.\n\nDuplicate value : %d",number,counter);
 }
 return 0;
 }
