#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

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
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2];
	if ((strcmp(op, "/") == 0 || strcmp(op, "%") == 0) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%i\n", result);

	return (0);
}
