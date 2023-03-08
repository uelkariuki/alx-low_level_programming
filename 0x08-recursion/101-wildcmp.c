#include "main.h"

/**
  *wildcmp_helper- function to compare and detemine if strings are identical
  *@s1: string 1 to be compared
  *@s2: string 2 to be compared
  *@i: index of current characters being compared in string 1
  *@j: index of current characters bein compared in string 2
  *Return: 1 if the strings can be considered identical, otherwise return 0.
  */

int wildcmp_helper(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s2[j] == '*')
	{
		if (wildcmp_helper(s1, s2, i, j + 1))
			return (1);

		if (s1[i] != '\0' && wildcmp_helper(s1, s2, i + 1, j))
			return (1);
		/*if all above conditions failed the strings aren't identical*/
		return (0);

	}
	/*if string 1 has reached end but s2 not at '\0' or '*', strings...*/
	 /*... are not identical*/
	if (s1[i] == '\0')
		return (0);
	/*if the chracters match the strings are identical*/
	if (s1[i] == s2[j])
		return (wildcmp_helper(s1, s2, i + 1, j + 1));
	/*if the s1[i] == s2[j] is not true*/
	return (0);


}

/**
  *wildcmp- function that compares two strings and returns 1 if the strings
  *can be considered identical, otherwise return 0
  *
  *@s1: string one to be compared
  *@s2: string two to be compared
  *Return: 1 if the strings can be considered identical, otherwise return 0
  */

int wildcmp(char *s1, char *s2)
{
	/*comparing of indices starting at 0 to show comparison start fromn the*/
	/*beginning of both input strings*/

	return (wildcmp_helper(s1, s2, 0, 0));

}
