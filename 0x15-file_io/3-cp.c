#include "main.h"

#define BUFFER_SIZE 1024

/**
  *error_handling- function to handle the incoming errors and print it
  *to the stderr
  *@exit_code: the error code to exit using
  *@error_message: the error message to be printed
  *@filename: the  actual file names
  */

void error_handling(int exit_code, const char *error_message,
		const char *filename)
{
	dprintf(STDERR_FILENO, error_message, filename);
	exit(exit_code);
}
/**
  *copy_file_content- function that copies content of a file to another file.
  *@filename_from: path of file to read from
  *@filename_to: path of file to write to
  *Return: 0
  */

int copy_file_content(const char *filename_from, const char *filename_to)
{
	int file_from, file_to;
	char text_content_buffer[BUFFER_SIZE];
	ssize_t t_bytes_read, t_bytes_written;

	file_from = open(filename_from, O_RDONLY);
	if (file_from == -1)/* not exist and cant be opened*/
	{
		error_handling(98, "Error: Can't read from file %s\n",
				filename_from);
	}
	file_to = open(filename_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		close(file_from);
		error_handling(99, "Error: Can't write to file %s\n",
				filename_to);
	}
	while ((t_bytes_read = read(file_from, text_content_buffer,
					BUFFER_SIZE)) > 0)
	{
		t_bytes_written = write(file_to, text_content_buffer, t_bytes_read);
		if (t_bytes_written == -1)
		{
			close(file_from);
			close(file_to);
			error_handling(99, "Error: Can't write to file %s\n",
					filename_to);
		}
	}
	if (t_bytes_read == -1)
	{
		close(file_from);
		close(file_to);
		error_handling(98, "Error: Can't read from file %s\n",
				filename_from);
	}
	if (close(file_from) == -1 || close(file_to) == -1)
		error_handling(100, "Error: Can't close fd\n", NULL);
	return (0);
}


/**
  *main- program that copies the content of a file to another file.
  *@argc: the number of commandline arguments
  *@argv: the array containing the program command line arguments
  *Return: 0 if succesful, 1 if not
  */

int main(int argc, char *argv[])
{
	const char *filename_from = argv[1];
	const char *filename_to = argv[2];

	if (argc != 3)
	{
		error_handling(97, "Usage: cp file_from file_to\n", NULL);

	}

	copy_file_content(filename_from, filename_to);
	return (0);
}

