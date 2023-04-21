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

	va_start(args, n);

	while (i < n)
	{
		if (va_arg(args, char*))
			printf("%s", va_arg(args, char*));
		else
			printf("(nil)");
		if (separator)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
