#include "main.h"

/**
  *append_text_to_file- function that appends text at the end of a file
  *@filename: is the name of the file
  *@text_content: the NULL terminated string to add at the end of the file
  *Return: 1 on success and -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *a_text;
	size_t total_bytes_written;

	if (filename == NULL)
	{
		return (-1);

	}
	if (text_content == NULL)
	{
		return (1);

	}

	a_text = fopen(filename, "a");
	if (a_text == NULL)
	{
		return (-1);

	}

	total_bytes_written = fwrite(text_content, 1, strlen(text_content), a_text);

	if (total_bytes_written != strlen(text_content))
	{
		fclose(a_text);
		return (-1);
	}

	fclose(a_text);
	return (1);

}
