//files are used to store large amount of data and also used to store program output data.
//File handling in C allows you to create, read, write, and manipulate files stored on disk. C provides a set of standard library functions for handling files, which are part of the stdio.h library.
#include<stdio.h>
int main()
{
	FILE *file = fopen("example1.txt", "r");//fopen is used to open the file.
					     //"r" is read mode 
 	if (file == NULL) 
	{
    		printf("Error opening file");
    		return 1;
	}
	char line[100];
	while (fgets(line, sizeof(line), file) != NULL)//gets is used to reaad a file line by line. 
	{
    		printf("%s", line);
	}	

	fclose(file);//fclose is used to close the file.
}

