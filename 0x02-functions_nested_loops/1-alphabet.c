#include "main.h"

/**
 * print_alphabet - print chars
 *
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a < 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
