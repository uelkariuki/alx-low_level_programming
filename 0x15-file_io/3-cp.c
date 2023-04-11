#include "main.h"

#define BUFFER_SIZE 1024

/**
  *error_handling- function to handle the incoming errors and print it
  *to the stderr
  *@exit_code: the error code to exit using
  *@error_message: the error message to be printed
  */

void error_handling(int exit_code, const char *error_message)
{
	dprintf(STDERR_FILENO, "%s", error_message);
	exit(exit_code);
}
/**
  *copy_file_content- function that copies content of a file to another file.
  *@filename_from: path of file to read from
  *@filename_to: path of file to write to
  */

void copy_file_content(const char *filename_from, const char *filename_to)
{
	int file_from, file_to;
	char text_content_buffer[BUFFER_SIZE];
	ssize_t t_bytes_read, t_bytes_written;


	file_from = open(filename_from, O_RDONLY);
	if (file_from == -1)/* not exist and cant be opened*/
	{
		error_handling(98, "Error: Can't read from file_from\n");
	}
	file_to = open(filename_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		error_handling(99, "Error: Can't write to file_to\n");
		close(file_from);
	}
	do {
		t_bytes_read = read(file_from, text_content_buffer, BUFFER_SIZE);
		if (t_bytes_read == -1)
		{
			error_handling(98, "Error: Can't read from file_from\n");
			close(file_from);
			close(file_to);
		}
		t_bytes_written = write(file_to, text_content_buffer, t_bytes_read);
		if (t_bytes_written == -1)
		{
			error_handling(99, "Error: Can't write to file_to\n");
			close(file_from);
			close(file_to);
		}
	} while (t_bytes_read > 0);
	if (close(file_from) == -1 || close(file_to) == -1)
	{
		error_handling(100, "Error: Can't close fd\n");
	}
}


/**
  *main- program that copies the content of a file to another file.
  *@argc: the number of commandline arguments
  *@argv: the array containing the program command line arguments
  *Return: 0 if succesful, 1 if not
  */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		error_handling(97, "Usage: cp file_from file_to\n");

	}

	copy_file_content(argv[1], argv[2]);
	return (0);
}

