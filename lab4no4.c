#include <unistd.h>
#include <stdio.h>


void put_char(char c) {
    write(1,&c,1);
    return;
}
int count = 0;
int Char1,Int;

int main() {
    scanf("%d %d",&Char1,&Int);
    while (count < Int) {
        put_char(Char1+48);
        count++;
    }
    return (0);
}