// Write a program to declare an array and not initialize it in the same line.
// Fill the array with the following numbers using the loop: 2, 4, 6, 8, 10


#include <stdio.h>
int main() {
    int dubey[5], i;
    for(i=0; i<5; i++)
    {
        dubey[i] = (i+1)*2;
        printf("%d ",dubey[i]);
    }

    return 0;
}