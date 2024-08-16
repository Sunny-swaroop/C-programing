#include<stdio.h>
int main()
{
	int num,i,s;
	printf("enter a number to know sum of upto that number:",num);
	scanf("%d",&num);
	i=0;
	s=0;
	for(i=0;i<=num;i++)
	{
		s=s+i;
	}

	printf("the sum of %d is %d\n",num,s);
	
}

