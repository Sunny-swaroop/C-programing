#include<stdio.h>
int area()
{
	int length,breadth,result;
	printf("enter the length of a rectangle:",length);
	scanf("%d",&length);
	printf("enter the breadth of a rectangle:",breadth);
	scanf("%d",&breadth);
	result=length*breadth;
	return result;
}
int main()
{
	int r;
	r=area();
	printf("the area of a rectangle is %d\n",r);
	return 0;
}

