/**
 * cap_string - capitalizes words
 * @s: string
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (i == 0)
				s[i] -= 32;
			switch (s[i - 1])
			{
				case ',':
				case ';':
				case '.':
				case '!':
				case '?':
				case '"':
				case '(':
				case ')':
				case '{':
				case '}':
				case ' ':
				case '\t':
				case '\n':
					s[i] -= 32;
					break;
			}
		}
		i++;
	}
	return (s);
}
