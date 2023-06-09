#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog infos
 * @d: pointer to a struct
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (!d->age)
			printf("Age: %f\n", 0.0);
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}

}
