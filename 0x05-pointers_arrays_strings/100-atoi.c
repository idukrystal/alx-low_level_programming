#include "main.h"

/**
 * _atoi - extracts  a signed int from a string
 * @s: string to covert
 *
 * Return: extracted int
 */
int _atoi(char *s)
{
	unsigned int num = 0;
	int len = _strlen(s), start = -1, stop =  0;
	int i = 0, connects = 1, neg = 1;
	char c;

	for (i = 0 ;  i < len; i++)
	{
		c = *(s + i);
		if ((c >= '0'  && c <= '9') || (c == '+' || c == '-'))
		{
			if (c == '-' || c == '+')
			{
				while ((c == '-' || c == '+') || c == ' ')
				{
					if (c == '-')
						neg *= -1;
					if (c == '+')
						neg *= 1;
					i++;
					c = *(s + i);
				}
				connects = (c >=  '0'  &&  c <= '9');
			}
			if (!connects)
			{
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
			num = to_int(s, start, stop);
			break;
		}
	}
	return (num * neg);
}

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

/**
 * to_int - extract an int betweet two points in a string
 * @s: string to extract int from
 *
 * @start: where int starts from in string
 *
 * @stop: where int stops in string
 *
 * Return: extracted int
 */
int to_int(char *s, int start, int stop)
{
	unsigned int tens = 1;
	int j = 0;
	int num = 0;

	for (j = stop; j >= start; j--)
	{
		num += (*(s + j) - '0') * tens;
		tens *= 10;
	}

	return (num);
}
