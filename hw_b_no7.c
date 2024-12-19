#include <unistd.h>
#include <stdio.h>

char Get_grade(int point) {
    if (point >= 85) {
        return 'A';
    } else if (point >= 75)  {
        return 'B';
    } else if (point >= 68)  {
        return 'C';
    }  else if (point >= 55)  {
        return 'D';
    } else {
        return 'F';
    }
}

int count = 0;
int score,range;
char grade;
int main() {
    scanf("%d",&range);
    while (count < range) {
        scanf("%d",&score);
        grade = Get_grade(score);
        printf("%d (%c) %c",score,grade,'\n');
        count++;
    }    
    return (0);
}