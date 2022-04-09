#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints base 10 digits
 *
 * Description: Prints numbers 0-9
 *
 * Return: zero
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
