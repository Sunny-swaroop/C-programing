#include<stdio.h>
#include<string.h>
int main()
{
	int x=10;
	int y=20;
	/*int *ip;
	ip=&x;//here we are alloting address of x
	printf("ip value is %d\n",*ip);
	ip=&y;//here it is changing
	printf("ip value is %d\n",*ip);
	*/
	int * const ip=&x;//here we are applying const so that it will not change.
	printf("ip value is %d\n",*ip);
	*ip=*ip+100;
	printf("%d\n",*ip);
	//ip=&y;//here it will show error,ip value does not change. 
	//printf("ip value is %d\n",*ip);
	return 0;
}

