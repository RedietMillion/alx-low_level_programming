#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Print sign of random number as positive, negative or zero
 *
 * Description: This program use if/else statement to identify the sign
 * of random number as negative,positive and zero
 *
 * Return: zero fo at the end
 */
int main(void)
{
	/**
	 * variable n has been declared
	 * coding then assigns the random value.
	 */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
