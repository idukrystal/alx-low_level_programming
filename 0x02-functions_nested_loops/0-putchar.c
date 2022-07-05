#include "main.h"

int main(void)
{
	int i;
	char *message = "_putchar";
	for (i = 0; i < strlen(message); i++)
	{
		_putchar(message[i]);
	}
	_putchar('\n');
	return 0;
}

int len(char *string)
{
	int i = 0;

	while (string[i] != '\n')
		i++;

	return (i);
}
