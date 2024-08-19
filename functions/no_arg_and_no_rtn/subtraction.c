#include<stdio.h>
void sub()
{
	int num1,num2,result;
	printf("enter the first number:",num1);
	scanf("%d",&num1);
	printf("enter the second number:",num2);
	scanf("%d",&num2);
	result=num1-num2;
	printf("the subtraction of %d - %d = %d\n",num1,num2,result);
}
int main()
{
	sub();
	return 0;
}

