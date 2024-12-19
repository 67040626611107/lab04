#include <unistd.h>
#include <stdio.h>


void put_char(char c) {
    write(1,&c,1);
    return;
}
int count = 0;
int count2 = 0;
char char1;
int row,colum;

int main() {
    scanf("%s %d %d",&char1,&row,&colum);
    while (count < row) {
        count2 = 0;
        while (count2 < colum)
        {
        put_char(char1);
        count2++;
        }
        put_char('\n');
        count++;
    }
    return (0);
}