#include<stdio.h>
   int Function(int N);

     int main(){
    int num;
    printf("HOW MANY 'Hello World' DO YOU WANT TO SEE: ");
    scanf("%d",&num);

   Function(num);
}

int Function(int N)
{

    if(N==0) {
        return 0;
    } else {

      Function(N-1);
      printf("Hello World\n\n\a");

    }

}