#include "main.h"

#define BUFFER_SIZE 1024


/**
  *copy_file- function that copies the content of a file to another file.
  *@filename_from: is the name of the file to copy from
  *@filename_to: is the name of the file to copy to
  *text_content_buffer: buffer for the characters to be read from file_from
  * 1024 bytes at a time to make less system calls
  *Return: (0);
  */

int copy_file(const char *filename_from, const char *filename_to)
{
	FILE *file_from, *file_to;
	char text_content_buffer[1024];
	size_t q;

	file_from = fopen(filename_from, "r");
	if (file_from == NULL)/* not exist and cant be opened*/
	{
		printf("Error: Can't read from file %s\n", filename_from);
		exit(98);
	}
	file_to = fopen(filename_to, "r");
	if (file_to != NULL) /* file already existing*/
	{
		fclose(file_to);
		/*truncate already existing file(overwrite& content destroyed*/
		file_to = fopen(filename_to, "w+");
	}
	else /* here file doesnt exist yet*/
	{
		file_to = fopen(filename_to, "w+");/* new one created*/
	}
	if (file_to == NULL)
	{
		printf("Error: Can't write to %s\n", filename_to);
		fclose(file_from);
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
		/*FD_VALUE is the value of the file descriptor*/
		exit(100);
	}
	return (0);
}

/**
 *main- program that copies the content of a file to another     file.
 *@ac: number of command line arguments
 *@av: array of pointers to the program command line argument    s
 *Return: 0
 */

int main(int ac, char **av)
{


	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	copy_file(av[1], av[2]);
	return (0);
}
