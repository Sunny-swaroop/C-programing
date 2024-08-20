//recursion function is a function that calls itself directly or indirectly during its execution.
//example
//solving factorial of n number
#include<stdio.h>
int fact(int num)
{
	if(num==0)
	{
		return 1;
	}
	else
	{
		return (num*fact(num-1));
	}
}
int main()
{
	int num1,result;
	printf("enter the number to find out its factorial:",num1);
	scanf("%d",&num1);
	result=fact(num1);
	printf("the factorial of %d is %d\n",num1,result);
	return 0;
}

