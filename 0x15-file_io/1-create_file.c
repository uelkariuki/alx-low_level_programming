#include "main.h"

/**
  *create_file- a function that creates a file.
  *@filename: the name of the file to create
  *@text_content: is a NULL terminated string to write to the file
  *Return: 1 on success, -1 on failure (file can not be created, file can
  *       not be written, write “fails”, etc…)
  */

int create_file(const char *filename, char *text_content)
{
	int file_creat;
	ssize_t total_bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	file_creat = open(filename, O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR);
	if (file_creat == -1)
	{
		return (-1);
	}
	/* dealing with text_content being NULL*/
	if (text_content != NULL)
	{
		total_bytes_written = write(file_creat, text_content, strlen(text_content));
		if (total_bytes_written == -1)
		{
			close(file_creat);
			return (-1);
		}
	}

	close(file_creat);
	return (1);
}
