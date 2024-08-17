//factorial of n number
#include<stdio.h>
int main()
{
	int num,i,result;
	printf("enter a number to know its factorial:",num);
	scanf("%d",&num);
	i=1;
	result=1;
	for(i=1;i<=num;i++)
	{
		result=result*i;
	}
	printf("the factorial of %d = %d\n",num,result);
}

	
