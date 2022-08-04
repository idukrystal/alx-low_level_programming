#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - a variadic function that prints  all its unnamed arguments
 * @format: list of formarts of each argument
 *
 */
void print_all(const char *format, ...)
{
	unsigned int i = 0, len;
	va_list ap;
	char *tmp;

	if (format == NULL)
		return;
	len = _strlen(format);

	va_start(ap, format);
	while (i < len)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%i", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			tmp = va_arg(ap, char *);
			tmp = (tmp != NULL) ? tmp : "(nil)";
			printf("%s", tmp);
			break;
		default:
			i++;
			continue;
		}
		if (i != (len - 1))
			printf(", ");
		i++;
	}

	va_end(ap);
	printf("\n");
}

/**
 * _strlen - returns the length of a string
 * @s: string to calculatr length of
 *
 * Return: length of string @s
 */
unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
