#include <stdio.h>
int main() {
    int number, copy, unit_digit, reverse ;
    printf("Enter the number: ");
    scanf("%d", &number);
    copy = number;
    while (number!=0){
        unit_digit= number % 10;
        reverse = reverse * 10 + unit_digit;
        number/=10;
    }

    if(copy==reverse){
        printf("Palindrome");
    }else{
        printf("Not a Palindrome");
    }
    return 0;
}