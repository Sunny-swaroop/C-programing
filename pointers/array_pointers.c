#include<stdio.h>
int main()
{
	int a[10];
	int i,n,j;
	printf("enter the size of array:\n",n);
	for(j=0;j<10;j++)
	{
		scanf("%d",&a[j]);
	}
	for(j=0;j<10;j++)
	{
		printf("%d\n",a[j]);
	}
	int *arr[10];
	for(i=0;i<10;i++)
	{
		arr[i]=a[i];
		printf("%d\n",arr[i]);
	}
	return 0;
}


