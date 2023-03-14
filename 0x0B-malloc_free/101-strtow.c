#include "main.h"

#include "2-strlen.c"
#include "2-strncpy.c"
#include "3-strcmp.c"

#define MAX_WORD_LEN 100

/**
  *strtow- function that splits a string into words.
  *
  *@str: string to be splitted to words
  *Return: pointer to an array of strings (words)
  */

char **strtow(char *str)
{
	char **words, *word_start, *word;
	int num_words = 0, word_len = 0;

	if (str == NULL || _strcmp(str, "") == 0)
	{
		return (NULL);
	}
	words = malloc(sizeof(char *) *  _strlen(str) / 2 + 1);
	if (words == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')/*count the number of words in the string*/
	{
		while (*str == ' ') /*skip over leading spaces*/
		{
			str++;
		}
		if (*str == '\0')/* if we hit end of string,break out of loop*/
			break;
		word_start = str; /* count the length of the current word*/
		while (*str != '\0' && *str != ' ')
		{
			str++;
			word_len++;
		}
		/*allocate memory for the current word*/
		word = malloc(sizeof(char *) * (word_len + 1));
		if (word == NULL)
		{
			free(words);
			return (NULL);
		}
		/*copy current word into the new string*/
		_strncpy(word, word_start, word_len);
		word[word_len] = '\0';
		words[num_words++] = word; /* add the new string to the array*/
	}
	words[num_words] = NULL;/* setting the last element to NULL*/
	return (words);
}


