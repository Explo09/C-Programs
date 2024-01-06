#include <stdio.h>
int main() {
    char user_name[100];
    printf("Enter the name: ");
    gets(user_name);
    printf("%s", user_name);
    return 0;
}
