#include<stdio.h>
int main()
{
	int length,breadth,result;
	printf("enter the length of a rectangle:",length);
	scanf("%d",&length);
	printf("enter the breadth of a rectangle:",breadth);
	scanf("%d",&breadth);
	result=(length+breadth)*2;
	printf("the perimeter of a rectangle is %d",result);
	return 0;
}

