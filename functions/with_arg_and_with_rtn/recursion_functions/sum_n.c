#include<stdio.h>
int sum(int num1)
{
	if (num1==0)
	{
		return 0;
	}
	else if (num1==1)
	{
		return 1;
	}
	else 
	{
		return (num1+sum(num1-1));
	}
}
int main()
{
	int num,result;
	printf("enter the number to find out the sum :",num);
	scanf("%d",&num);
	result=sum(num);
	printf("the sum of %d number is %d\n",num,result);
	return 0;
}

