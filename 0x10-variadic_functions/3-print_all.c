#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - print anything
 * @format: string of arg types
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	char *c = ", ";
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		if (!format[i + 1])
			c = "";
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(args, int), c);
				break;
			case 'i':
				printf("%i%s", va_arg(args, int), c);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), c);
				break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
					printf("(nil)%s", c);
				printf("%s%s", s, c);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
