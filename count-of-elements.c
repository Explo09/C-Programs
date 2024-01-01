//write a program to count digits in a number



#include <stdio.h>
int main() {
    int n, count=0;
    printf("Enter a number");
    scanf("%d",&n);
    while(n!=0){
        n /=10;
        ++count;
    } 
    printf("The count of the number %d",count);
    return 0;
}