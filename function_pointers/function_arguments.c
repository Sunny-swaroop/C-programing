#include<stdio.h>
int add(int a,int b);
int multiply(int a,int b);
void compute(int(*operation)(int,int),int x,int y);
int main()
{
	compute(add,3,4);
	compute(multiply,3,4);
	return 0;
}
int add(int a,int b)
{
	return a+b;
}
int multiply(int a,int b)
{
	return a*b;
}
void compute(int(*operation)(int,int),int x,int y)
{
	int result=operation(x,y);
	printf("result:%d\n",result);
}


