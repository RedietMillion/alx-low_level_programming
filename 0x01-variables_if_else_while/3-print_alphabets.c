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
	for (char letter = 'a' ; letter <= 'z' ; letter++)
	{
		putchar(letter);
	}
	for (char letter = 'A' ; letter <= 'Z' ; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
