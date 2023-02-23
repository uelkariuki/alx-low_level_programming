#include <stdio.h>

/**
  *main- program that finds and prints sum of the even-valued terms and \n
  *
  *Return: 0
  */

int main(void)
{
	/*initialize the variables holding the first two integers*/
	int previous_term = 1;
	int current_term = 2;
	int next_term;

	/*initialize the variable to hold the even valued terms*/
	int even_sum = 0;

	while (current_term <= 4000000)
	{
		/*modulo 2 for even number*/
		if (current_term % 2 == 0)
		{
			even_sum += current_term;
		}
		 /*calculate the next term in sequence*/
		next_term = previous_term + current_term;
		/*update prevoius terms and current term*/
		previous_term = current_term;
		current_term = next_term;
	}
	printf("%d\n", even_sum);

	return (0);
}
