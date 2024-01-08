#include <stdio.h>
#include <math.h>
int main()
{
    int number, copy, digit, no_of_digits, new_number;

    printf("Enter a number: ");
    scanf("%d", &number);
    copy = number;
    no_of_digits = 0;
    while (number > 0)
    {
        number /= 10;
        no_of_digits++;
    }
    number = copy;
    while (number > 0)
    {
        digit = number % 10;
        new_number += pow(digit, no_of_digits);
        number /= 10;
    }
    if (copy == new_number)
    {
        printf("%d is an Armstrong Number.", copy);
    }
    else
    {
        printf("%d is not an Armstrong Number.", copy);
    }
    return 0;
}