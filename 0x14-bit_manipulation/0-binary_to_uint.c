#include "main.h"

/**
 * _strlen - string length
 * @s: stirng
 * Return: str length
 */

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * _pow - power of a num
 * @n: the num
 * @p: power
 * Return: result
 */
unsigned int _pow(unsigned int n, unsigned int p)
{
	unsigned int i = 1;

	if (p == 0)
		return (1);
	while (p--)
		i *= n;
	return (i);
}
/**
 * binary_to_unit - convert binary to unsigned int
 * @b: string of binary
 * Return: decimal int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n, i = 0;

	if (b == NULL)
		return (0);

	while (i < _strlen(b))
	{
		if (b[_strlen(b) - i - 1] == '0')
			n += 0;
		else if (b[_strlen(b) - i - 1] == '1')
			n += _pow(2, i);
		else
			return (0);
		i++;
	}
	return (n);


}
