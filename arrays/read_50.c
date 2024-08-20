#include<stdio.h>
int main()
{
	int i,a[50],num;//here we are taking 50 variables
	printf("enter how many variables you need:",num);
	scanf("%d",&num);//here we are entering how many variables you need among 50 variables.
	printf("enter the elements:");
	for (i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<num;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}

