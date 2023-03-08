#include "main.h"

/*used a previously created function to know the length of the string*/
#include "2-strlen_recursion.c"

/**
  * is_palindrome_helper- function to help check if a string is a palindrome
  *@s: string to be checked
  *@right: index of the right most character
  *@left: index of the left most character (index locates the occurence)
  *Return:1 if a string is a palindrome and 0 if not.
  */

int is_palindrome_helper(char *s, int left, int right)
{
	if (left >= right)
		return (1);
	if (s[left] != s[right])
		return (0);
	return (is_palindrome_helper(s, left + 1, right - 1));

}

/**
  *is_palindrome- function that returns 1 if a string is a
  *               palindrome and 0 if not.
  *@s: string to be checked
  *Return: 1 if a string is a palindrome and 0 if not.
  */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (is_palindrome_helper(s, 0, len - 1));

}
