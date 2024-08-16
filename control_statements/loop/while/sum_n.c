#include<stdio.h>
int main()
{
	int num1,i,s;
	printf("enter the number to know sum of upto that number:",num1);
	scanf("%d",&num1);
	i=0;
	s=0;
	while (i<=num1)
	{
		s=s+i;
		i++;
	}
	printf("the sum of %d is %d\n",num1,s);
}

