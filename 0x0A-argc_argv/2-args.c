#include <stdio.h>

/**
 * main - Entry point
 * @argc: num of args
 * @argv: array of args
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
