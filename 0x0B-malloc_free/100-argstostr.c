#include "main.h"

#include "2-strlen.c"



/**
  *argstostr-function that concatenates all the arguments of your program
  *@ac: the number of command line argumnets
  *@av: the array of pointers to the arguments
  *Return: a pointer to a new string
  */

char *argstostr(int ac, char **av)
{
	int i, j, index, total_len;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/* If arguments not as above find the total length of the*/
	   /*concatenated string*/
	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		/* add one to account for the newline character*/
		total_len = total_len + _strlen(av[i]) + 1;
	}
	/*allocate memory for the concatenated string*/
	str = (char *) malloc(sizeof(char) * total_len + 1);
	/* if allocation is unsuccesful*/
	if (str == NULL)
	{
		return (NULL);

	}
	/*concantenate the two arguments*/
	index = 0; /* track the concat string of arguments*/
	for (i = 0; i < ac; i++)
	{
		j = 0; /*track the next character in arguments av[i]*/
		while (av[i][j] != '\0')
		{
			str[index] = av[i][j];
			index++;
			j++;
		}
		str[index] = '\n'; /* add newline char*/
		index++;
	}
	/* add null termianting character at the end of conca'ted string*/
	str[index] = '\0';
	return (str);
}
