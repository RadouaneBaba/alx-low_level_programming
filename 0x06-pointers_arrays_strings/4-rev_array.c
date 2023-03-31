/**
 * reverse_array - reverses the contnt of an array
 * @a: array of ints
 * @n: num of elements
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n / 2)
	{
		int c = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = c;
		i++;
	}
}
