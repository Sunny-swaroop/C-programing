#include<stdio.h>
int main()
{
	int a[100],i,num,result;
	printf("the array size is 100 so choose your number upto 100\n");
	printf("enter a number to find out  even numbers :",num);
	scanf("%d",&num);
	result=0;
	for(i=1;i<=num;i++)
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
}


