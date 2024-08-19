#include<stdio.h>
int sub()
{
	int x,y,result;
	printf("enter the first number:",x);
	scanf("%d",&x);
	printf("enter the second number:",y);
	scanf("%d",&y);
	result=x-y;
	return result;
}
int main()
{
	int subtraction;
	subtraction=sub();
	printf("the subtraction of two number is %d\n",subtraction);
	return 0;
}

