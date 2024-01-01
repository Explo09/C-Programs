#include <stdio.h>
int main()
 {
    int num, i, j;
    printf("\nEnter the num: ");
    scanf("%d", &num);
    for(i=1; i<=num; i++){
        for(j=1; j<=10; j++){
         printf("%d * %d = %d\n", num, i, j, j * i );
     }
     printf("\n\n");
    }
    return 0;
}