#include <stdio.h>

int main () {
    char character;
    printf("Enter a Character\t");
    scanf("%c", &character);
    printf("ASCII code of %c is %d", character, character);
}