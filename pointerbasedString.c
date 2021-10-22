#include<stdio.h>
int main(){
     int i,cha=0,dig=0,spa=0,cons=0,vow=0;
    char *p,str[]="Welcome CSE103 students of (Section 1 & 2) to LAB: 05 (Pointer and Pointer Based Strings) !";
         p=str;

    printf("THE LINE IS:\n\n\t\t%s\n",str);
     for(;*p!='\0';p++){
         cha++;
        if(*p>=48 && *p<=57){
            dig++;
         }
        if(*p==' '){
            spa++;
         }
        if(*p==65 || *p==69 ||*p==73 || *p==79 || *p==85 || *p==97 || *p==101 || *p==105 || *p==111 || *p==117){
            vow++;
         }
        if ((*p>=65 && *p<=90) || (*p>=97 && *p<=122)) {
            cons++;}
    }
    printf("\nTOTAL WORD:%d\n",spa+1);
    printf("\nTOTAL CONSONANTS:%d\n",cons-vow);
    printf("\nTOTAL VOWELS:%d\n",vow);
    printf("\nTOTAL DIGIT:%d\n",dig);
    printf("\nTOTAL WHITE SPACES:%d\n",spa);
    printf("\nTOTAL CHARACTER:%d\n",cha);
}
