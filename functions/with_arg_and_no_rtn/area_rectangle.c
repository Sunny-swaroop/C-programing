#include<stdio.h>
void area(int l,int b)
{
	int result;
	result=l*b;
	printf("the area of a rectangle is %d\n",result);
}
int main()
{
	int length,breadth;
	printf("enter the length of a rectangle:",length);
	scanf("%d",&length);
	printf("enter the breadth of a rectangle:",breadth);
	scanf("%d",&breadth);
	area(length,breadth);
	return 0;
}

