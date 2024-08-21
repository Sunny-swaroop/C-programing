#include<stdio.h>
int main()
{
	int a[50],i,result;
       	result=0;
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
		{
			a[result]=i;
			result++;
		}
	}
	for(i=0;i<result;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}

