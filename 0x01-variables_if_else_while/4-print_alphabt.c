#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints alphabet except q and e
 *
 * Description: Prints all the alphabet in lower case except q and e
 * Can only use putchar
 *
 * Return: 0 for success
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q')
		{
			letter++;
		}
		else if (letter == 'e')
		{
			letter++;
		}
		else
		{
			putchar(letter);
			letter++;
		}
	}
	putchar('\n');
	return (0);
}
