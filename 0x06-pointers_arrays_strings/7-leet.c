/**
 * leet - encodes into 1337
 * @s: string
 * Return: string
 */

char *leet(char *s)
{
	int i = 0;
	char code[] = {'a', 'e', 'o', 't', 'l'};
	char codem[] = {'A', 'E', 'O', 'T', 'L'};
	char encode[] = {'4', '3', '0', '7', '1'};

	while (s[i] != '\0')
	{
		if (s[i] == code[i] || s[i] == codem[i])
			s[i] = encode[i];
		i++;
	}
	return (s);
}
