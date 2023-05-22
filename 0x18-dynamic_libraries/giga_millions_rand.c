#include <stdio.h>

int rand(void)
{
	static int number = -1;
	number++;
	if (number == 0)
		return (8);
	if (number == 1)
		return (8);
	if (number == 2)
		return (7);
	if (number == 3)
		return (9);
	if (number == 4)
		return (23);			
	if (number == 5)
		return (74);

}
