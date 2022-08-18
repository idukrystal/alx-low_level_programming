#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int tm;
	char *c;

	tm = 1;
	c = (char *) &tm;

	return ((int)*c);
}
