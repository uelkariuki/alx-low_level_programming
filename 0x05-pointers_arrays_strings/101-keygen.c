#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
  *main- program that generates random valid passwords for the
  *      program 101-crackme.
  *Return: 0
  */

int main(void)
{
	const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";


	/*add 1 for the null terminator*/
	char password[PASSWORD_LENGTH + 1];
	int m;

	/*seed random number generator with current time*/
	srand(time(NULL));

	/*generate random password*/
	for (m = 0; m < PASSWORD_LENGTH; m++)
	{
		/*select a random character from the character set*/
		 /*and add it to the password array*/
		/*The % ensures the random number is within the bounds of the character set*/
		password[m] = charset[rand() % (sizeof(charset) - 1)];
	}
	/*add null terminator*/
	password[PASSWORD_LENGTH] = '\0';

	/*print password*/
	printf("%s\n", password);

	return (0);

}



