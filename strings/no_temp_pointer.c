#include<stdio.h>
#include<string.h>
int main()
{
	char str[6][10]={
		{"sunny"},
		{"dileep"},
		{"sai"},
		{"yeswanth"},
		{"shiva"},
		{"nanda"},
	};
	char *ptr[6];
	int i=0,j;
	while(i<6)
	{
		ptr[i]=str[i];
		i++;
	}
	i=0;
	while(i<6)
	{
		j=0;
		while(ptr[i][j]!='\0')
		{
			printf("%c",ptr[i][j]);
			j++;
		}
		i++;
	}
	return 0;
}



