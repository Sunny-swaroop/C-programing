#include<stdio.h>
//no arguments and no return type example
//sum of two numbers
void sum()
{
	int num1,num2,result;
	printf("enter the first number:",num1);
	scanf("%d",&num1);
	printf("enter the second number:",num2);
	scanf("%d",&num2);
	result=num1+num2;
	printf("the sum of %d + %d =%d\n",num1,num2,result);
}
#include<stdio.h>
int main()
{
	sum();
	return 0;

}
