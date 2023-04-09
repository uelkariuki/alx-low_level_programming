#include "main.h"

/**
  *read_textfile- function that reads a text file and prints it to the
  *     POSIX standard output.
  *@filename: the file to be read from
  *@letters: is the number of letters it should read and print
  *Return: the actual number of letters it could read and print
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file_pointer = NULL;
	char *buffer_letters;
	size_t the_bytes_read;

	if (filename == NULL)
	{
		return (0);
	}
	file_pointer = fopen(filename, "r");
	if (file_pointer == NULL)
	{
		return (0);
	}
	buffer_letters = malloc(letters);
	{
		if (buffer_letters == NULL)
		{
			fclose(file_pointer);
			return (0);

		}
	}
	the_bytes_read = fread(buffer_letters, 1, letters, file_pointer);
	if (the_bytes_read == 0 || ferror(file_pointer))
	{
		free(buffer_letters);
		fclose(file_pointer);
		return (0);
	}
	write(STDOUT_FILENO, buffer_letters, the_bytes_read);
	if (write(STDOUT_FILENO, buffer_letters,
				the_bytes_read) != (ssize_t)the_bytes_read)
	{
		free(buffer_letters);
		fclose(file_pointer);
		return (0);
	}
	fclose(file_pointer);
	return (the_bytes_read);
}
