#include <stdio.h>
#include <string.h>
int main() {
    int length, i;
    char str [100];
    printf("Enter the string: ");
    gets(str);
    for(i=0; str[i]!= '\0'; i++);
    length = strlen(str);
    printf("\n The Length of the entered string counter without strlen(): %d", i);
    printf("\n The Length of the entered string counter with strlen(): %d", length);
    return 0;
}