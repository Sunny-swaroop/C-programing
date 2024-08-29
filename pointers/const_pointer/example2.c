#include<stdio.h>
int main()
{
	int x=10;
	int y=20;
	const int * const p=&x;
	printf("value pointed by p:%d\n",*p);
	p=&y;
	ptintf("value of p:%d\n",*p);
	*p=x+100;
	return 0;
}

