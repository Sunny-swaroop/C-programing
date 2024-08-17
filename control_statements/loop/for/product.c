#include<stdio.h>
int main()
{
	int num1,i,product;
	printf("enter the first number",num1);
	scanf("%d",&num1);
	product=1;
	i=1;
	for(i=1;i<=num1;i++)
	{
		product=product*i;
	}
	printf("the product of %d is %d\n",num1,product);
}

