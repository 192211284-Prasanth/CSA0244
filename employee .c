#include<stdio.h>

int main()
{
int salary, bonusA, bonusB, bonusExtra, total;
char grade;

printf("Enter salary:\n");
scanf("%d", &salary);
printf("Enter grade (A/B):\n");
scanf(" %c", &grade);

if (grade == 'A')
{
    bonusA = salary * 0.05;
    total = salary + bonusA;
    if (salary < 10000)
    {
        bonusExtra = salary * 0.02;
        total = total + bonusExtra;
    }
}
else if (grade == 'B')
{
    bonusB = salary * 0.1;
    total = salary + bonusB;
    if (salary < 10000)
    {
        bonusExtra = salary * 0.02;
        total = total + bonusExtra;
    }
}
else
{
    printf("Invalid grade. Please enter A or B.\n");
    return 0;
}

printf("The total salary of the employee is: $%d\n", total);

return 0;
}
