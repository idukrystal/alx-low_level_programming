#include <stdio.h>

/**
 * pre_start - ptints a stting before main starts
 *
 */
void __attribute__ ((constructor)) pre_start()
{
	char *w = "You're beat! and yet, you must allow,\nI bore my house ";
	char *x = "upon my back!\n";

	printf("%s%s", w, x);
}
