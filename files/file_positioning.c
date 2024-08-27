//You can manipulate the file position indicator within a file to perform various operations like seeking to a specific location or determining the current position.
//fseek(): Moves the file pointer to a specific location in the file.
//ftell(): Returns the current file position indicator.
//rewind(): Sets the file position indicator to the beginning of the file.
#include<stdio.h>
int main()
{
	FILE *file = fopen("example.txt", "r");
	if (file == NULL) 
	{
    		printf("Error opening file");
    		return 1;
	}

	fseek(file, 0, SEEK_END); // Move to the end of the file
	long file_size = ftell(file); // Get the file size
	rewind(file); // Move back to the beginning

	printf("File size: %ld bytes\n", file_size);
	fclose(file);
	return 0;
}


