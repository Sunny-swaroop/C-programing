//checking factors of a number
#include<stdio.h>
int main()
{
	int num,i,f;
	printf("enter a number to know its factors:",num);
	scanf("%d",&num);
	i=1;
	f=1;
	for(i=1;i<=num;i++)
	{
		f=num%i;
		if (f==0)
		{
			printf("%d\n",i);
		}
	}
}

