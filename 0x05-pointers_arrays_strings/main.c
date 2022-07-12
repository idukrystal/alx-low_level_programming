#include "main.h"
#include <stdio.h>

int main(void)
{
	char *str;
	int array[5];
	char s1[98];
	char *ptr;

    str = "0123456789";
    puts2(str);

    str = "0123456789";
    puts_half(str);

    printf("starting 8:\n");

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);


    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
