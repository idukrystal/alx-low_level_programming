#include <stdio.h>
/**
 * _strstr - searches for a substring in a string
 * @haystack: the string
 *
 * @needle: the substring
 *
 * Return: first occurence of substring of NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	char tmp = haystack[0], tmpn = '?';

	for (; tmp != '\0'; i++)
	{
		tmpn = needle[0];

		if (tmp == needle[0])
		{
			for (j = i; tmpn != '\0'; j++)
			{
				tmp = haystack[j];
				if (tmpn != tmp)
					break;
				tmpn = needle[j - i];
			}

			if (tmpn == '\0')
				return (haystack + i);
		}
		tmp = haystack[i];
	}
	return (NULL);
}
