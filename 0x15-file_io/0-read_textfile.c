#include "main.h"

/**
 * read_textfile - prints a textfile to the screen
 * @filename: name of textfile
 * @letters: no of chars to print;
 * Return: no of chars actually printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	size_t count = 0;
	signed char c;

	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}

	while ((c = getc(file)) != EOF && count < letters)
	{
		if (_putchar(c) == 1)
			count++;
		else
			return (0);
	}
	fclose(file);
	return (count);
}
