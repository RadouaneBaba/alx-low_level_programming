#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'size of c types'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;
printf("Size of a char: %i byte(s)", syzeof(c));
printf("Size of an int: %i byte(s)", syzeof(i));
printf("Size of a long int: %i byte(s)", syzeof(li));
printf("Size of a long long int: %i byte(s)", syzeof(lli));
printf("Size of a float: %i byte(s)", syzeof(f));
return (0);
}
