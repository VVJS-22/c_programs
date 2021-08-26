#include <stdio.h>

int main() {
    char name[100];
    int age;

    printf("Enter your name:\t");
    scanf("%s", name);
    printf("enter your age:\t");
    scanf("%d", &age);
    printf("%s is %d years old \n\n\n", name, age);
    return 0;
}