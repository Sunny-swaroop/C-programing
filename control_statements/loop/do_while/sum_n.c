#include<stdio.h>
int main()
{
	int num,i,result;
	printf("enter a number :",num);
	scanf("%d",&num);
	i=0;
	result=0;
	do
	{
		result=result+i;
		i++;
	}while (i<=num);
	printf("the sum of %d is %d\n",num,result);

}
