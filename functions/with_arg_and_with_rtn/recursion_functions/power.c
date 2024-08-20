#include<stdio.h>
int power(int x,int y)
{
	if (y==0)
	{
		return 1;
	}
	else
	{
		return (x*power(x,(y-1)));
	}
}
int main()
{
	int num,n,result;
	printf("enter the number:",num);
	scanf("%d",&num);
	printf("enter the power number to know num value:",n);
	scanf("%d",&n);
	result=power(num,n);
	printf("the value of %d and its power %d is %d\n",num,n,result);
	return 0;
}

