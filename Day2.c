#include <stdio.h>
int main()
 {
 int number1, number2; 
 char operator; 

 printf("Enter two numbers: ");
 scanf("%d %d", &number1, &number2);

 printf("Enter the operator (+,-,*,/): ");
 scanf(" %c", &operator);

 switch(operator)
{
   case '+':
            printf("Sum: %d\n", number1+number2);
            break;
   case '-':
            printf("Difference: %d\n", number1-number2);
            break;
   case '*':
            printf("Product: %d\n", number1*number2);
            break;
   case '/':
            printf("Quotient: %.2f\n", number1/(float)number2);
           break;
   default:
            printf("Invalid Operator- function not supported.\n");
 }
   return 0;
}

