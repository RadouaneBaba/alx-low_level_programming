#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings
 *
 * @separator: string between string
 * @n: num of args
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	char *s;

	va_start(args, n);

	while (i < n)
	{
		s = va_arg(args, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator && i != n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
