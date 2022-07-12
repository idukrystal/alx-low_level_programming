#include "main.h"

int _atoi(char *s)
{
	int neg = 1;
	int num = 0;
	int len = _strlen(s);
	int start = -1;
	int stop =  0;
	int tens = 1;
	int connects = 1;
	int i = 0;
	int j = 0;

	for (i = 0 ;  i < len; i++)
	{
		char c = *(s + i);
		if ((c >= '0'  && c <= '9')|| (c == '+' || c == '-') )
		{
			if (c == '-' || c == '+')
			{
				while ((c == '-' || c == '+'))
				{
					if (c == '-')
						neg *= -1;
					if (c == '+')
						neg *= 1;
					i++;
					c = *(s + i);
				}
				connects = (c >=  '0'  &&  c <= '9') ;
			}
			if (!connects)
			{
				neg = 1;
				connects = 1;
				continue;
			}
			start = i;
			while (c >=  '0'  &&  c <= '9')
			{
				stop  = i;
				i++;
				c = *(s + i);
			}
			for (j = stop; j >= start; j--)
			{
				num += (*(s + j) - '0') * tens ;
				tens *= 10;
			}
			break;
		}
	}
	return num * neg;
}
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to calculatr length of
 *
 * Return: length of string @s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}
