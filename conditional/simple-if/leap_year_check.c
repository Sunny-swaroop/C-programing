#include<stdio.h>
int main()
{
	int year,result;
	printf("enter a year to find out whether it is an leap year or not:",year);
	scanf("%d",&year);
	result=year%4;
	if(result==0)
	{
		printf("the year %d is an leap year",year);
	}
	else
	{
		printf("the year %d is not an leap year",year);
	}
}

