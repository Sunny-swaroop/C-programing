#include <stdio.h>
int main()
{
	int i = 100;
	int* pt;
	pt=&i;
	printf("%u\n",i);
	printf("%u\n",&i);
	printf("%u\n",pt);
	printf("%u\n",&pt);
	printf("%u\n",&pt);
        printf("%u\n",*(&i));

	return 0;
}
