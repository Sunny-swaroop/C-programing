#include<stdio.h>
#include<string.h>
int main()
{
	char str[6][10]={
		{"sunny"},
		{"dileep"},
		{"shiva"},
		{"yeshwanth"},
		{"sai"},
		{"nanda"},
	};
	char *ptr[6];
	int i=0;
	while(i<6)
	{
		ptr[i]=str[i];
		i++;
	}
	int j=0;
	while(j<6)
	{
		printf("%s\n",ptr[j]);
		j++;
	}
	return 0;
}


