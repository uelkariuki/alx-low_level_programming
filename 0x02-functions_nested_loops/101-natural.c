 #include <stdio.h>

/**
  *main - entry point
  *
  *Return: sum of all multiples of 3 and 5 below 1024
  */

int  main(void)
{
	int i, sum = 0;
	{
		for (i = 1; i < 1024; i++)
		{
			if (i % 3 == 0 || i % 5 == 0)
			{
				sum = (sum + i);
			}
		}
		printf("%d\n", sum);
		return (sum);
	}
}
