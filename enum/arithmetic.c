#include<stdio.h>
#include "operations.c"
enum ARITHMETIC
{
	addition,
	subtraction,
	multiplication,
	division
};
int main()
{
	int a,b;
	int n,result;
	printf("enter the first number:",a);
	scanf("%d",&a);
	printf("enter the second number:",b);
	scanf("%d",&b);
	printf("choose your option to perform operation(0-addition,1-subtraction,2-multiplication,3-division)\n",n);
	scanf("%d",&n);
	switch (n)
	{
		case addition:
	  			result=sum(a,b);
				printf("the sum of %d + %d = %d\n",a,b,result);
				break;
		case subtraction:
				result=sub(a,b);
				printf("the subtraction of %d - %d =%d\n",a,b,result);
				break;
		case multiplication:
				result=mul(a,b);
				printf("the multiplication of %d * %d = %d\n",a,b,result);
				break;
		case division:
				result=div(a,b);
				printf("the division of %d / %d = %d\n",a,b,result);
				break;
	}
	return 0;
}

