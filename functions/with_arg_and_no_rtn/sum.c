//with argument and no return type
//example
//sum of 2 numbers
#include<stdio.h>
void sum(int num1,int num2)
{
	int num3;
	num3=num1+num2;
	printf("the sum of %d + %d =%d\n",num1,num2,num3);
}
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the first number:",a);
	scanf("%d",&a);
	printf("enter the second number:",b);
	scanf("%d",&b);
	sum(a,b);
	return 0;
}


