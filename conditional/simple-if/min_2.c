#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter a value of first number:",num1);
	scanf("%d",&num1);
	printf("enter a value of second number:",num2);
	scanf("%d",&num2);
	if(num1<num2)
	{
		printf("%d is minimum number",num1);
	}
	else
	{
		printf("%d is minimum number",num2);
	}
}

