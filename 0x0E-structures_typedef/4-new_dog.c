#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create new dog
 * @name: dog name
 * @age: dog's age
 * @owner: dog's owner name
 * Return: pointer to dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(*d));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
