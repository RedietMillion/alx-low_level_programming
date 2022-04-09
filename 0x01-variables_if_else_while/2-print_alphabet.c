#include <stdio.h>
#include <stdlib.h>

/**
 * main - It prints alphabets
 *
 * Description: Print the alphabets a-z in lower cases using putchar only
 *
 * Return: zero after at the end
 */
int main(void)
{
	char letter = 'a';

	for ( ; letter <= 'z' ; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
