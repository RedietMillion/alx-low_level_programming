#include <stdio.h>
#include <stdlib.h>
/**
 * main - It prints alphabets
 *
 * Description: Print the alphabets a-z and A-Z in lower and upper cases
 * using putchar only
 *
 * Return: zero after at the end of the program
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
