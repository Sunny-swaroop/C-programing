//no argument and return type
//example
//sum of two numbers
#include<stdio.h>
int sum() //we will use int when we have return type
{
	int num1,num2,num3;
	printf("enter the first number:",num1);
	scanf("%d",&num1);
	printf("enter the second number:",num2);
	scanf("%d",&num2);
	num3=num1+num2;
	return num3;
}
int main()
{
	int result;
	result=sum();
	printf("the sum of two numbers is %d\n",result);
        return 0;
}

