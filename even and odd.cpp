#include<stdio.h>
int main()
{
	int n,a;
	printf("enter a number to reverse\n");
	scanf("%d",&n);
	
	a=n%2;
	if(a==0)
	printf("the number %d is even number",n);
	else
	printf("the number %d is odd number",n);
}
