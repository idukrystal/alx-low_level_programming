#include <stdlib.h>

/**
 * malloc_checked - trys to  allocates memory of given size on error-98
 * @b: the size of space required
 * Return: 0 on success
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem  == NULL)
		exit(98);
	return (0);
}
