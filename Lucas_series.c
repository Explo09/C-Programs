// WAP to find sum of Lucas Series: 2, 1, 3, 4, 7, 11......... n.

#include <stdio.h>
int main() {
    int first = 2, second = 1, new = 0, sum, n, i;
    printf("Enter the nth term: ");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        printf("%d\t", first);
        sum+=first;
        new = first + second;
        first = second;
        second = new;
    }
    printf("\nThe sum of the Lucas Series till %dth term: %d", n, sum);
    return 0;
}