#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
	char * arr = malloc(sizeof(char) * size);
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return arr;
}
