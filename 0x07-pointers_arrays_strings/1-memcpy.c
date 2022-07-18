/**
 * _memcpy - copies first n bytes of src buffer.to dest buffer
 * @src: the buffer/memory location to copy
 *
 * @dest: the buffer to copy to
 *
 * @n: the number of bytes to copy
 *
 * Return: @dest after modification
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
