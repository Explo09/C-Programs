// Write a program to ask the user to enter a string and calculate the number of words given in the string.

#include <stdio.h>
int main() {
    int i, counting;
    char str[100];
    printf("enter the string: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
    if(str[i]==' ')
    {
        counting++;
        while(str[i+1]==' ')
        i++;
    }
}
printf("\nNumber of words: %d", counting+1);
    return 0;
}