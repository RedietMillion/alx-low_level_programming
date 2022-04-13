#include "main.h"

/**
 *_islower - checks wether the character is lower or not
 *@c: value to be compared
 *Return: zero if it false and one if it is true
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
