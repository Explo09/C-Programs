// Write a program to read an array from the user and print that array. 

#include <stdio.h>
int main() {
    int dubey[5], i;
    printf("Enter 5 integers in the array: ");
    for(i = 0; i<5; i++)
    {
        scanf("%d", &dubey[i]);
    }
    printf("Dubey Array: ");
    for(i=0; i<5; i++);{
    printf("%d ", dubey[i]);
    }   
    return 0;
}