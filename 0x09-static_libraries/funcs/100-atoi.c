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
	int len = _strlen(s); //start = -1, stop =  0;
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
			//start = i;
			while (c >=  '0'  &&  c <= '9')
			{
				//stop  = i;
				i++;
				c = *(s + i);
			}
			num = 5;//to_int(s, start, stop);
			break;
		}
	}
	return (num * neg);
}
