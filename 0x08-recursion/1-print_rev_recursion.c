#include "main.h"

/**
 * _print_rev_recursion  - prints out a string in reverse
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
