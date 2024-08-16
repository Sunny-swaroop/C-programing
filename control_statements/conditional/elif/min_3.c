#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("enter the first number:",num1);
	scanf("%d",&num1);
	printf("enter the second number:",num2);
	scanf("%d",&num2);
	printf("enter the third number:",num3);
	scanf("%d",&num3);
	if((num1<num2)&(num1<num3))
	{
		printf("%d is minimum number",num1);
	}
	else if(num2<num3)
	{
		printf("%d is minimum number",num2);
	}
	else
	{
		printf("%d is minimum number",num3);
	}
	return 0;
}

