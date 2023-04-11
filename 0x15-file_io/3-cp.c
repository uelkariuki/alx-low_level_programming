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
	int file_from, file_to;
	char text_content_buffer[BUFFER_SIZE];
	ssize_t t_bytes_read, t_bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)/* not exist and cant be opened*/
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(99);
	}
	do {
		t_bytes_read = read(file_from, text_content_buffer,BUFFER_SIZE);
		if (t_bytes_read == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			close(file_from);
			close(file_to);
			exit(98);
		}
		t_bytes_written = write(file_to, text_content_buffer, t_bytes_read);
		if (t_bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}while (t_bytes_read > 0);

	if (close(file_from) == -1 || close(file_to) == -1) 
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(100);
	}
	return (0);
}
