#include<stdio.h>
int main()
{
	int a[50],i,num,min,max;
	printf("enter the size of variables:",num);
	scanf("%d",&num);
	printf("enter the elements %d\n",num);
	for (i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for (i=0;i<num;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("the minimum element is %d\n",min);
	max=a[0];
	for (i=0;i<num;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("the maximum element is %d\n",max);
	return 0;
}

