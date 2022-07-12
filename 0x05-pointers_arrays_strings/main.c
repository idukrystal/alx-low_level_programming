#include "main.h"
#include <stdio.h>

int main(void)
{
        int x = _atoi("2147483647");
	int y = _atoi("-2147483648");
	int z = _atoi("---++++ -++ Sui - te - 402 #cisfun :)");

	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", z);

	return 0;
}
