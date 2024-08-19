#include<stdio.h>
void  sub(int a,int b)
{
	int result;
	result=a-b;
	printf("the subtraction of %d - %d = %d\n",a,b,result);
}
int main ()
{
	int num1,num2;
	printf("enter the first number:",num1);
	scanf("%d",&num1);
	printf("enter the second number:",num2);
	scanf("%d",&num2);
	sub(num1,num2);
	return 0;
}

