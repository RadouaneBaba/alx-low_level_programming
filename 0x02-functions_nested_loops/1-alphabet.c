#includ "main.h"

void print_alphabet(void)
{
	char a = 'a';

	while (a < 'z')
	{
		_putchar(a);
		a++;
	}
	putchar('\n');
}
