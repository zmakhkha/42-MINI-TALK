#include <stdio.h>

int main() {
    char letter = 'A';
    int i;
    printf("Binary representation of %c is : ", letter);
    for (i = 7; i >= 0; i--)
    {
        printf("%d-", (letter >> i) );
    }
    printf("\n");
    return 0;
}