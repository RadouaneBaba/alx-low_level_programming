#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: num of args
 * @argv: array of args
 * Return: 0 on success 1 on failure
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
		printf("0\n");

	int sum = 0;
	int i = 0;

	*argv++;
	argc--;
	while (argc--)
	{
		while (*argv[i] != '\0')
		{
			if (*argv[i] < 48 || *argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		sum += atoi(*argv);
		*argv++;
	}

	printf("%i\n", sum);
	return (0);
}
