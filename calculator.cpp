#include<stdio.h>
int main()
{
	int x,n,c;
	printf("enter the number:\n");
	scanf("%d%d",&x,&n);
	printf("enter the choice:\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:printf("the addition of %d+%d is %d",x,n,x+n);break;
		case 2:printf("the subtraction of %d-%d is %d",x,n,x-n);break;
		case 3:printf("the multiplication of %d*%d is %d",x,n,x*n);break;
		case 4:printf("the division of %d/%d is %d",x,n,x/n);break;
		default:
			printf("enter the choice");
	}
}
