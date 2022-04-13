#include "main.h"

/**
 *print_alphabet_x10 - print alphabet 10 times
 *
 *return: nothing
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
