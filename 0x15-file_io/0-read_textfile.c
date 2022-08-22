#include "main.h"

/**
 * read_textfile - prints a text fule to the terminal
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_no;
	ssize_t cpy, count;
	char *text;

	if (filename == NULL)
		return (0);

	file_no  = open(filename, O_RDONLY);

	if (file_no == -1)
		return (0);

	text  = malloc(sizeof(char) * (letters));
	if (text == NULL)
		return (0);

	cpy  = read(file_no, text, letters);
	count = write(STDOUT_FILENO, text, cpy);

	close(file_no);

	free(text);

	return (count);
}
