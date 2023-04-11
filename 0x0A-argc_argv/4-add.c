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
	{
		printf("0\n");
		return (0);
	}

	int sum = 0;
	int i = 1;
	int j = 0;

	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		i++;
	}

	printf("%d\n", sum);
	return (0);
}
