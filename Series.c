//  WAP to Display Fibonacci Series.

#include<stdio.h>
int main() {
    int i, n;
    long long int a = 0, b = 1, c = 0;
    printf("\nEnter the nth term: ");
    scanf("%d", &n);
    for (i = 0; i <n; i++)
    {
        printf("%lld ", c);
        a = b; 
        b = c; 
        c = a + b;
    }
    return 0;
}