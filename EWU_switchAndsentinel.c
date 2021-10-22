#include<stdio.h>
int main(){
    int i=0, marks, pass = 0, fail = 0;
    int Aplus = 0, A = 0, Aminus = 0;
    int Bplus = 0, B = 0, Bminus = 0;
    int Cplus = 0, C = 0, Cminus = 0;
    int Dplus = 0, D = 0;



    while(marks != -1){

        printf("ENTER YOUR MARKS:\n");
            scanf("%d",&marks);

            if(marks < -1 || marks > 100){
                printf("WRONG INPUT.PLEASE ENTER A VALID MARKS\n\a");
            }


        if(marks != -1 && (marks >= 0 && marks <= 100)){
        if(marks < 60){
                fail++;
            }
            else{
                pass++;
            }

    i++;


    switch(marks){

        case 100:
        case 99:
        case 98:
        case 97: printf("YOU GOT A+\n");

        Aplus++;
    break;
        case 96:
        case 95:
        case 94:
        case 93:
        case 92:
        case 91:
        case 90: printf("YOU GOT A\n");

        A++;
    break;
        case 89:
        case 88:
        case 87: printf("YOU GOT A-\n");

        Aminus++;
    break;
        case 86:
        case 85:
        case 84:
        case 83: printf("YOU GOT B+\n");

        Bplus++;
    break;
        case 82:
        case 81:
        case 80: printf("YOU GOT B\n");

        B++;
    break;
        case 79:
        case 78:
        case 77: printf("YOU GOT B-\n");

        Bminus++;
        break;
        case 76:
        case 75:
        case 74:
        case 73: printf("YOU GOT C+\n");

        Cplus++;
        break;
        case 72:
        case 71:
        case 70: printf("YOU GOT C\n");

        C++;
        break;
        case 69:
        case 68:
        case 67: printf("YOU GOT C-\n");

        Cminus++;
        break;
        case 66:
        case 65:
        case 64:
        case 63: printf("YOU GOT D+\n");

        Dplus++;
        break;
        case 62:
        case 61:
        case 60: printf("YOU GOT D\n");

         D++;
        break;

        default: printf("YOU FAILED IN THIS EXAM\n\a");

    }//switch
        }//if
    }//while
    if(i != 0){
        printf("TOTAL A+: %d \n", Aplus);
        printf("TOTAL A: %d \n", A);
        printf("TOTAL A-: %d \n", Aminus);
        printf("TOTAL B+: %d \n", Bplus);
        printf("TOTAL B: %d \n", B);
        printf("TOTAL B-: %d \n", Bminus);
        printf("TOTAL C+: %d \n", Cplus);
        printf("TOTAL C: %d \n", C);
        printf("TOTAL C-: %d \n", Cminus);
        printf("TOTAL D+: %d \n", Dplus);
        printf("TOTAL D: %d \n", D);
        printf("STUDENTS PASSED: %d \n", pass);
        printf("STUDENTS FAILED: %d \n", fail);
        printf("TOTAL NUMBER OF STUDENTS: %d \n", i);
    }
    else{
        printf("NO MARKS WERE ENTERED! \n \a");
    }


return 0;
}//main