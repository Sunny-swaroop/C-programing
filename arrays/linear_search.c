#include<stdio.h>
int main()
{
	int a[]={90,20,40,1,5,7,47,69,91,100};
	int i,num,found;
	for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		printf("%d\n",a[i]);
	}
	printf("enter a element to search in above list:",num);
	scanf("%d",&num);
	found=0;
	for (i=0;i<10;i++)
	{
		if(a[i]==num)
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		printf("%d is found\n",num);
	}
	else
	{
		printf("%d is not found\n",num);
	}
}


