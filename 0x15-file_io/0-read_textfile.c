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
	int file_pointer;
	char *buffer_letters;
	ssize_t the_bytes_read, the_bytes_written;

	if (filename == NULL)
	{
		return (0);
	}
	file_pointer = open(filename, O_RDONLY);
	if (file_pointer == -1)
	{
		return (0);
	}
	buffer_letters =  (char *) malloc(letters);
	{
		if (buffer_letters == NULL)
		{
			close(file_pointer);
			return (0);

		}
	}
	the_bytes_read = read(file_pointer, buffer_letters, letters);
	if (the_bytes_read == -1)
	{
		free(buffer_letters);
		close(file_pointer);
		return (0);
	}
	the_bytes_written = write(STDOUT_FILENO, buffer_letters, the_bytes_read);
	if (the_bytes_written == -1 ||  the_bytes_written != the_bytes_read)
	{
		free(buffer_letters);
		close(file_pointer);
		return (0);
	}
	close(file_pointer);
	return (the_bytes_read);
}
