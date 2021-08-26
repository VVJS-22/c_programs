#include <stdio.h>

int main () {
    int dividend, divisor;
    double quotient, reminder;
    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    reminder = dividend % divisor;

    printf("Quotient = %.2lf\n  Reminder = %.2lf", quotient, reminder);
}