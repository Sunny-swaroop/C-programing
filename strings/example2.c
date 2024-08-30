#include<stdio.h>
#include<string.h>
int main()
{
	char str[5][10]={
		{"sunny"},
		{"dileep"},
		{"yeshwanth"},
		{"shiva"},
		{"sai"},
	};
	int i=0;
	while(i<5)
	{
		printf("%s\n",str[i]);
		i++;
	}
}

