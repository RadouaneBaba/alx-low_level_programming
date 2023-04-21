#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - print anything
 * @format: string of arg types
 */

void print_all(const char * const format, ...)
{
	int size, i, j = 0;
	char *s;
	char c;
	va_list args;

	while (format[j])
	{
		c = format[j];
		if (c == 'c' || c == 'i' || c == 'f' || c == 's')
			size++;
		j++;
	}
	va_start(args, size);
	while (i < size)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c, ", va_arg(args, char));
				break;
			case 'i':
				printf("%i, ", va_arg(args, int));
				break;
			case 'f':
				printf("%f, ", va_arg(args, float));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s)
				{
					printf("%s, ", va_arg(args, char *));
					break;
				}
				printf("(nil), ");
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
