#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print nums
 * 
 * @seperator: string between nums
 * @n: num of args
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	while (i < n)
	{
		printf("%i", va_arg(args, int));
		if (separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
