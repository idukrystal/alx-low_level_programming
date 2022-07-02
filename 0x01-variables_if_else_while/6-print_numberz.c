 (12 sloc)  234 Bytes
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

 /**
  * main - entry point of program
  * Description: prints all decimal digits 
  * Return: 0 if succesful 1 if not
  */
int main(void)
{
	for (int i = 48; i < 58; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
