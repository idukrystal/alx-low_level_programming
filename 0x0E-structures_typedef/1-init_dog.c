#include "dog.h"
/**
 * init_dog - initializes a struct dog
 * @d: a pointer to the struct dog
 * @name: its age
 * @age: its name
 * @owner: its owners name;
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
