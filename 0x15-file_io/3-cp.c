#include "main.h"

#define BUFFER_SIZE 1024


/**
  *main- programthat copies the content of a file to another file.
  *@argc: the number of commandline arguments
  *@argv: the array containing the program command line arguments
  *Return: (0);
  */

int main(int argc, char *argv[])
{
	FILE *file_from, *file_to;
	char text_content_buffer[1024];
	const char *filename_from = argv[1], *filename_to = argv[2];
	size_t q;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from fi    le_to\n", argv[0]);
		exit(97);
	}
	file_from = fopen(filename_from, "r");
	if (file_from == NULL)/* not exist and cant be opened*/
	{
		printf("Error: Can't read from file %s\n", filename_from);
		exit(98);
	}
	file_to = fopen(filename_to, "r");
	if (file_to != NULL) /* file already existing*/
	{
		file_to = fopen(filename_to, "w+");  /*truncate*/
	}
	else /* here file doesnt exist yet*/
		file_to = fopen(filename_to, "w+");/* new one created*/
	if (file_to == NULL)
	{
		printf("Error: Can't write to %s\n", filename_to);
		exit(99);
	}
	q = (fread(text_content_buffer, 1, 1024, file_from));
	while (q > 0) /* some bytes were read and written*/
	{
		fwrite(text_content_buffer, 1, q, file_to);
		q = (fread(text_content_buffer, 1, 1024, file_from));
	}
	if (fclose(file_from) == -1 || fclose(file_to) == -1)
	{
		printf("Error: Can't close fd FD_VALUE");
		exit(100);
	}
	return (0);
}
