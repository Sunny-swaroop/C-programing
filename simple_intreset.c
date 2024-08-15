#include<stdio.h>
int main()
{
	int principle,total,rate,si;
	printf("enter the principle amount:",principle);
	scanf("%d",&principle);
	printf("enter the total time taken:",total);
	scanf("%d",&total);
	printf("enter the rate of intreset:",rate);
	scanf("%d",&rate);
	si=(principle*total*rate)/100;
	printf("the total simple intreset is %d",si);
	return 0;
}

