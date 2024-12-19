#include <stdio.h>
int main (void)
{
// Statements
for (int i = 1; i <= 3; i++) {
    printf("Row %d: ", i);
    int j = 1;
    while (j <= 5){
    printf("%3d", j);
    j++;
    }
        printf("\n");
    } // for i
return 0;
} // main
