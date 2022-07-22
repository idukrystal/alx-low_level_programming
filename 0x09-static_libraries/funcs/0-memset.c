/**
 * _memset - fills first n bytes of a buffer wutj a constant byte b
 * @s: the buffer/memory location
 *
 * @b: the constant char
 *
 * @n: the number of bytes to fill
 *
 * Return: s after modification
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;

	return (s);
}
