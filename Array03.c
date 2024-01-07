// Write a program to declare an array and not initialize it in the same line.
// Fill the array with the following numbers using the loop: 1, 2, 3, 4, 5

#include <stdio.h>
int main() {
    int swati[5], i;
    for(i=0; i<5; i++)
    {
        swati[i] = (i+1)*2;
        printf("%d ",swati[i]);
    } 
    return 0;
}