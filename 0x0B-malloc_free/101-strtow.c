#include "main.h"
#include <string.h>

#include "3-strcmp.c"
#include "2-strncpy.c"
#include "2-strlen.c"


/**
  *strtow- function that splits a string into words.
  *
  *@str: string to be splitted to words
  *Return: pointer to an array of strings (words)
  */

char **strtow(char *str)
{
	char **words, *word;
	int j, k, num_words = 0, in_word = 0, i;

	if (str == NULL || _strcmp(str, "") == 0)
	{
		return (NULL);
	}
	words = malloc(sizeof(char *) *  _strlen(str) / 2 + 1);
	if (words == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			if (!in_word)
			{
				in_word = 1;
				j = i;
			}
		}
		else if (in_word)
		{
			in_word = 0;
			word = malloc(sizeof(char) * (i - j + 1));
			if (word == NULL)
			{
				for (k = 0; k < num_words; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
			strncpy(word, str + j, i - j);
			word[i - j] = '\0';
			words[num_words++] = word;
		}
	}
	if (in_word)
	{
		word = malloc(sizeof(char) * (i - j + 1));
		if (word == NULL)
		{
			for (k = 0; k < num_words; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}
		strncpy(word, str + j, i - j);
		word[i - j] = '\0';
		words[num_words++] = word;
	}
	words[num_words] = NULL;
	return (words);
}


