//finding area of rectangle
//using no arguments and no return type
#include<stdio.h>
void area()
{
	int length,breadth,result;
	printf("enter the length of rectangle:",length);
	scanf("%d",&length);
	printf("enter the breadth of rectangle:",breadth);
	scanf("%d",&breadth);
	result=length*breadth;
	printf("the area of a rectangle is %d\n",result);
}
int main()
{
	area();
	return 0;
}

