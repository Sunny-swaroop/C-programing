#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter the first number:",num1);
	scanf("%d",&num1);
	printf("enter the second number:",num2);
	scanf("%d",&num2);
	if(num1>num2)
	{
		printf("%d is maximum number",num1);
	}
	else
	{
		printf("%d is maximum number",num2);
	}
}

