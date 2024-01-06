#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i;
printf("Enter a string: ");

gets(str);
for(i=0; str[i]!='\0';i++);
i--;
while(str[i]!='\0')
{
    printf("\n %s", str);
    str[i] = '\0';
    i--;
}
return 0;
}
