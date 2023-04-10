#include <stdio.h>

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

	int m = (int) argv[1] * (int) argv[2];

	printf("%i\n", m);
	return (0);
}
