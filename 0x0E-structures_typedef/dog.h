#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog infos
 * @name: dog name
 * @age: dog age
 * @owner: dog's owner name
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

typedef struct dog dog_t;

#endif
