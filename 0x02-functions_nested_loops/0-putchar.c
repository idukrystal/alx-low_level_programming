#include "_putchar.c"
#include <string.h>

int main(void)
{
	int i;
	char *message = "_putchar";
	for (i = 0; i < strlen(message); i++)
	{
		_putchar(message[i]);
	}
	_putchar('\n');
}
