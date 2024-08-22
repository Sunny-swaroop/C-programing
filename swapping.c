#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter the first value:",num1);
	scanf("%d",&num1);
	printf("enter the second number:",num2);
	scanf("%d",&num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("%d,%d after swapping\n",num1,num2);
	return 0;
}

