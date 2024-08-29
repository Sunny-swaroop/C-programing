#include<stdio.h>
int add(int a,int b);
int subtract(int a,int b);
int(*getoperation(char op))(int,int);
int main()
{
	//get the function pointer based on the operation
	int(*operation)(int,int)=getoperation('+');
	//use the function pointer
	int result=operation(10,5);
	printf("result:%d\n",result);
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
int(*getoperation(char op))(int,int)
{
	if(op=='+')
	{
		return&add;
	}
	else if(op=='-')
	{
		return&subtract;
	}
	else
	{
		return NULL;
	}
}


