// to copy the string using pointers
#include <stdio.h>
#include <string.h>
int main()
{
	char source[]="swaroop";
	char destination[50];
	strcpy(destination,source);
	printf("%s\n",source);
	printf("%s\n",destination);
	return 0;
}
