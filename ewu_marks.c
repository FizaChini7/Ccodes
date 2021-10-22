#include <stdio.h>

int main(){
    int i = 0, marks, pass = 0, fail = 0;
    int Aplus = 0, A = 0, Aminus = 0;
    int Bplus = 0, B = 0, Bminus = 0;
    int Cplus = 0, C = 0, Cminus = 0;
    int Dplus = 0, D = 0;

    while (marks != -1)
    {
        printf("ENTER YOUR MARK: ");
        scanf("%d", &marks);

        if(marks < -1 || marks > 100){
            printf("INVALID MARK. PLEASE ENTER A VALID MARK (0 - 100) \n");
        }

        if(marks != -1 && (marks >= 0 && marks <= 100)){
            if(marks < 60){
                fail++;
            }
            else{
                pass++;
            }

            i++;

            if(marks >= 97){
                Aplus++;
            }
            else if(marks >= 90){
                A++;
            }
            else if(marks >= 87){
                Aminus++;
            }
            else if(marks >= 83){
                Bplus++;
            }
            else if(marks >= 80){
                B++;
            }
            else if(marks >= 77){
                Bminus++;
            }
            else if(marks >= 73){
                Cplus++;
            }
            else if(marks >= 70){
                C++;
            }
            else if(marks >= 67){
                Cminus++;
            }
            else if(marks >= 63){
                Dplus++;
            }
            else if(marks >= 60){
                D++;
            }
        }
    }

    if(i != 0){
        printf("A+: %d \n", Aplus);
        printf("A: %d \n", A);
        printf("A-: %d \n", Aminus);
        printf("B+: %d \n", Bplus);
        printf("B: %d \n", B);
        printf("B-: %d \n", Bminus);
        printf("C+: %d \n", Cplus);
        printf("C: %d \n", C);
        printf("C-: %d \n", Cminus);
        printf("D+: %d \n", Dplus);
        printf("D: %d \n", D);
        printf("STUDENTS PASSED: %d \n", pass);
        printf("STUDENTS FAILED: %d \n", fail);
        printf("TOTAL NUMBER OF STUDENTS: %d \n", i);
    }
    else{
        printf("NO MARKS WERE ENTERED! \n \a");
    }

    return 0;
}