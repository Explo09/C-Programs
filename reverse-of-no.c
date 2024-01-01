#include <stdio.h>
int main() {
    int number, unit_digit, reverse;
    printf("Enter the number");
    scanf("%d", &number);
    while(number!=0)
    {
    unit_digit = number % 10;
    reverse = reverse * 10 + unit_digit;
    number = number / 10;
    }
    printf("Reverse of number %d",reverse);
    return 0;
}