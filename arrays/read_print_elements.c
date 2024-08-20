//program to print and read elements
//using arrays
//in arrays we can assign only one data type of elements
//array is an collection or group of elements.
#include<stdio.h>
int main()
{
	int i,a[10];//it is assining values to 10 variables.
	printf("enter the 10 elements:");
	for (i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}

