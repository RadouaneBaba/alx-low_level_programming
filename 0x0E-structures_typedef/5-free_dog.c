#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory of dog_t
 * @d: pointer to dog_t
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
