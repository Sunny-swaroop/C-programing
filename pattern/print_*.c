#include<stdio.h>
int main()
{
	int a,i,j;
	printf("enter a number to print in a pattern",a);
	scanf("%d",&a);
	i=1;
	j=0;
	for(i=i;i<a;i++)
	{
		for(j=0;j<i;j++)
		{

		  printf(" * ");
		}

	printf("\n");
	}
	return 0;

}

