#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - string copy
 * @s: string
 * Return: copy
 */

char *_strdup(char *s)
{
	int i = 0;
	int size = 0;
	char *str;

	if (s == NULL)
		return (NULL);
	while (s[size] != '\0')
		size++;
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	while (i < size)
	{
		str[i] = s[i];
		i++;
	}
	str[size] = '\0';
	return (str);
}

/**
 * new_dog - create new dog
 * @name: dog name
 * @age: dog's age
 * @owner: dog's owner name
 * Return: pointer to dog struct or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(*d));

	if (d == NULL)
		return (NULL);

	d->name = _strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;

	return (d);
}
