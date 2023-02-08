#include<stdio.h>
#include<math.h>

int sum_of_digits(int n)
{
int sum = 0;
while (n > 0)
{
sum = sum + (n % 10);
n = n / 10;
}
return sum;
}

int happy_number(int n)
{
int first_two_sum = sum_of_digits(n / pow(10, (int)log10(n) - 1)) + sum_of_digits(n / pow(10, (int)log10(n)));
int remaining_sum = sum_of_digits(n % (int)pow(10, (int)log10(n) - 1));
if (first_two_sum == remaining_sum || first_two_sum == remaining_sum / 10)
{
    return 1;
}
else
{
    return 0;
}
}

int main()
{
int n;
printf("Enter a number:\n");
scanf("%d", &n);
if (happy_number(n))
{
    printf("%d is a happy number\n", n);
}
else
{
    printf("%d is not a happy number\n", n);
}
return 0;
}
