/**
 * leet - encodes into 1337
 * @s: string
 * Return: string
 */

char *leet(char *s)
{
	int i = 0;
	int j;
	char code[] = {'a', 'e', 'o', 't', 'l'};
	char codem[] = {'A', 'E', 'O', 'T', 'L'};
	char encode[] = {'4', '3', '0', '7', '1'};

	while (s[i] != '\0')
	{
		j = 0;

		while (j < 5)
		{
			if (s[i] == code[j] || s[i] == codem[j])
				s[i] = encode[j];
			j++;
		}
		i++;
	}
	return (s);
}
