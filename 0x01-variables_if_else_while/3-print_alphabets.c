 (12 sloc)  234 Bytes
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

 /**
  * main - entry point of program
  * Description: prints the alphabets in lowercase then uppercase
  * Return: 0 if succesful 1 if not
  */
int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (char c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
