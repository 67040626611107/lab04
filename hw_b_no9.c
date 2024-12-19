#include <unistd.h>
#include <stdio.h>
int A = 0;
int B = 0;
int C = 0;
int D = 0;
int F = 0;
char Get_grade(int point) {
    if (point >= 85) {
        A++;
        return 'A';
    } else if (point >= 75)  {
        B++;
        return 'B';
    } else if (point >= 68)  {
        C++;
        return 'C';
    }  else if (point >= 55)  {
        D++;
        return 'D';
    } else {
        F++;
        return 'F';
    }
}

int count = 0;
int score,range;
char grade;
int main() {
    while (range == '\0') {
        scanf("%d",&score);
        if (score == -1) {
            break;
        }
        grade = Get_grade(score);
        printf("%d (%c) %c",score,grade,'\n');
    }    
    printf("A(%d)\nB(%d)\nC(%d)\nD(%d)\nF(%d)",A,B,C,D,F);
    return (0);
}
