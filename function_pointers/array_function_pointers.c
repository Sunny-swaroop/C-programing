#include<stdio.h>
int add(int a,int b);
int subtract(int a,int b);
int multiply(int a,int b);
int divide(int a,int b);
int main()
{
	int(*operations[])(int,int)={add,subtract,multiply,divide};
	int a=20,b=4;
	printf("Addition:%d\n",operations[0](a,b));
	printf("Subtraction:%d\n",operations[1](a,b));
	printf("multiplication:%d\n",operations[2](a,b));
	printf("divison:%d\n",operations[3](a,b));
	return 0;
}
int add(int a,int b)
{
	return a+b;
}
int subtract(int a,int b)
{
	return a-b;
}
int multiply(int a,int b)
{
	return a*b;
}
int divide(int a,int b)
{
	return a/b;
}

