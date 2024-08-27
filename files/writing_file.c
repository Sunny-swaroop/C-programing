#include<stdio.h>
int main()
{
	FILE *file1 = fopen("example.txt", "w");
	if (file1 == NULL) 
	{
    		printf("Error opening file");
    		return 1;
	}	

	fprintf(file1, "Hello, World!\n");
	fclose(file1);
}



