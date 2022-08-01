#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to the dog;
 */
void print_dog(struct dog *d)
{
	char *name = (d->name != NULL) ? d->name : "(nil)";
	char *owner  = (d->owner != NULL) ? d->owner : "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
}
