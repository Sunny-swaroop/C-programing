#include<stdio.h>
#include<string.h>
int main()
{
	char str[30]="hello world";
	char *ptr;
	ptr=&str;
	int c,l;
	l=strlen(str);
	printf("%d\n",l);
	while(*ptr!='\0')
	{
		printf("%c\n",*ptr);
		ptr++;
		c++;
	}
	while(*ptr!='\0')
	{
		printf("%c\n",*ptr);
		ptr++;
	}
	printf("%d\n",sizeof(str));
	printf("%d\n",sizeof(ptr));
	return 0;
}

