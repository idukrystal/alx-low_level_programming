#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
	char * arr;

	arr = (size == 0) ?  NULL : malloc(sizeof(char) * size);
	unsigned int i;

	if (arr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return arr;
}
