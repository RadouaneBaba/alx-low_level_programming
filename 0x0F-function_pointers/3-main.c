#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * main - Entry point
 *
 * @argc: num of args
 * @argv: array of args
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2] == '/' || argv[2] == '%') && argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	result = (get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));

	if (result == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%i\n", result);

	return (0);
}
