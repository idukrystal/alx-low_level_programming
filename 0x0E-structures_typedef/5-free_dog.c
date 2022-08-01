#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees mememory allocated for a struct dog
 * @d: the struct dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
