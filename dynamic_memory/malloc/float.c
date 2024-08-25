#include<stdio.h>
#include<stdlib.h>
int main()
{
	float *p;
	p=(float*)malloc(sizeof(float));
	if(p==NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}
	*p=3.14;
	printf("value of the allocated float:%.2f\n",*p);
	free(p);
	return 0;
}


