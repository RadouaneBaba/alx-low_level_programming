#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry mode
 *
 * Return: Always (0) success
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int l = n % 10;

	if (l < 6 && l != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, l);
	else if (l == 0)
		printf("Last digit of %i is %i and is 0\n", n, l);
	else
		printf("Last digit of %i is %i and is greater than 5\n", n, l);
	return (0);
}
