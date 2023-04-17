#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - string length
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
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

	d->name = malloc(strlen(name));
	if (d->name)
		d->name = name;
	d->owner = malloc(strlen(owner));
	if (d->owner)
		d->owner = owner;

	d->age = age;

	return (d);
}
