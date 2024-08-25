#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int *p;
	//dynamic allocate memory for one integer
	p=(int*)malloc(sizeof(int));
	//check if memory allocation was successful
	if(p==NULL)
	{
		printf("memory allocation failed\n");
		return 1;
	}
	//assign a value tothe allocated memory
	*p=42;
       //print the value stored in the dynamically allocated memory
         printf("value of the allocated integer:%d\n",*p);
	 free(p);//free allocated memory
	 return 0;
}


