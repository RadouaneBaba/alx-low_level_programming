#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: num of args
 * @argv: array of args
 * Return: 0 on successs 1 on failure
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	int m = atoi(argv[1]) * atoi(argv[2]);

	printf("%i\n", m);
	return (0);
}
