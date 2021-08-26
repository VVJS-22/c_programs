#include <stdio.h>

int main() {
    double a, b, sum;
    printf("Enter Two Numbers:\t");
    scanf("%lf %lf", &a ,&b);
    sum = a + b;
    printf("Sum of %lf , %lf is equal to %lf", a, b, sum);
}