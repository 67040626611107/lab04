#include <unistd.h>
#include <stdio.h>


void put_char(char c) {
    write(1,&c,1);
    return;
}
int count = 0;
int count2 = 0;
int Char1,Int;

int main() {
    scanf("%d %d",&Char1,&Int);
    while (count < Int) {
        count2 = 0;
        while (count2 < Int)
        {
        put_char(Char1+48);
        count2++;
        }
        put_char('\n');
        count++;
    }
    return (0);
}