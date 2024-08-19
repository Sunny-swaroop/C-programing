//with arguments and with return type
//example
//sum of two numbers
#include<stdio.h>
int sum(int num1,int num2)
{
	int num3;
	num3=num1+num2;
	return num3;
}
int main()
{
	int a,b,result;
	printf("enter the first number:",a);
	scanf("%d",&a);
	printf("enter the second number:",b);
	scanf("%d",&b);
	result=sum(a,b);
	printf("the sum of two number is %d\n",result);
	return 0;
}

