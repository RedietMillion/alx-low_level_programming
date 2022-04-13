#include "main.h"

/**
 *print_last_digit - print last digits of a number
 *@n: input num
 *Return: The value of the last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
		return ((-1 * n) % 10);
	else
		return (n % 10);
}
