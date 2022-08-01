#include <stdlib.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;
    char * d  = malloc(5);
    for (int i = 0; i < 5; i++)
	    d[i] = 'd';
    my_dog = new_dog(d, 3.5, d);
    free(d);
    printf("My name is %s, and I am %.1f :) - Woof! am owned by %s\n", my_dog->name, my_dog->age, my_dog->owner);
    return (0);
}
