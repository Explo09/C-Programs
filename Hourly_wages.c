// Write a program to calcualte wage of a labor according to the following criterias: 
 //Work Hours --------------------- Wage
 //First 8 Hours  ----------------  100/hr
 //Next 2 Hours   ----------------  150/hr
 //Next 2 Hours   ----------------  200/hr
// Above 12 Hours ----------------  300/hr

#include <stdio.h>
int main() {
    int hours_worked, wage;
    
    printf("\nEnter the working hour: ");
    scanf("%d", &hours_worked);

    if (hours_worked<=8)
        wage = hours_worked * 100;
    else if (hours_worked<=10) 
        wage = (hours_worked - 8) * 150 + 800;
    else if (hours_worked<=12)
        wage = (hours_worked - 10) * 200 + 800 + 300;
    else
        wage = (hours_worked - 12) * 300 + 800 + 300 + 400;
    printf("The total wage of the worker is: %d\n", wage);
    return 0;
}