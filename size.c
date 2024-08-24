#include<stdio.h>
void main()
{
	long int  x=10;
	printf("%d\n",sizeof(x));
	int *ip;
	ip=&x;
	printf("%d\n",sizeof(ip));

}

