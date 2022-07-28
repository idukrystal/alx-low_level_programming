#include <stdlib.h>

/**
 * _calloc - allocates space for an array
 * @nmemb: no of elements in array
 * @size: no of bytes each element occupires
 * Return: poiter to new array or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int  *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	/* if (mem != NULL) */
	/*	*mem = 0; */
	return (mem);
}
