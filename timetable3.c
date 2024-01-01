#include <stdio.h>
int main() {
    int num, i, j;
    printf("\nEnter the number:  ");
    scanf("%d", &num);

    for(i=1; i<=num; i++){
        for(j=1; j<=10; j++){
            printf("%d * %d = %d\n", i, j, i*j);
        }
        printf("\n\n");
    }
    return 0;
}