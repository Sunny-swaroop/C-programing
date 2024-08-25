#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a;
	int n,i;
	printf("enter number of elements:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	if(a==NULL)
	{
		printf("memory allocation failed\n");
		return 1;
	}
	for(i=0;i<n;i++)
	{
		a[i]=i+1;
	}
	printf("allocated array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	free(a);
	return 0;
}


