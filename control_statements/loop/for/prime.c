//prime number checking
#include<stdio.h>
int main()
{
	int num,i,prime;
	printf("enter a number:",num);
	scanf("%d",&num);
	i=1;
	prime=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			prime++;
		}
	}
	if (num==0)
	{
		printf("the number %d is not a prime number\n",num);
	}
	else if (num==1)
	{
		printf("the number %d is not a prime number\n",num);
	}
	else if (prime>2)
	{
		printf("the number  %d is not a prime number\n",num);
	}
        else
	{
		printf("the number %d is prime\n",num);
	}
	  	
}

