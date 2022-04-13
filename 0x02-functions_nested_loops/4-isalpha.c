#include "main.h"

/**
 *_isalpha - compare the input whether it is a charcter or not and return 1 o 0
 *@c: the arrugment which is passed the the function
 *Return: zero or one
 */
int _isalpha(int c)
{
	if ((c > 'A' && c < 'Z') || (c > 'a' && c > 'z'))
		return (1);
	else
		return (0);
}
