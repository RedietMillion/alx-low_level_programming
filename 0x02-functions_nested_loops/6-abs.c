#include "main.h"
/**
 *_abs - print the absolute value of the number
 *@n: input
 *Return: absolute value
 */

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
