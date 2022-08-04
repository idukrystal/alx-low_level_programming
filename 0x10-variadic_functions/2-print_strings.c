#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - a variadic function that prints  all its unnamed arguments
 * @separator: to be printed between each argument
 *
 * @n: no of arguments passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *tmp;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		tmp = va_arg(ap, char *);
		tmp = (tmp != NULL) ? tmp : ("(nil)");
		printf("%s", tmp);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
