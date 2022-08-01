#include <stdlib.h>
#include "dog.h"

/**
 * void free_dog - frees mememory allocated for a struct dog
 * @d: the struct dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);


}
