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

	for (;  haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = i; needle[j - i] != '\0'; j++)
			{
				if (needle[j - i] != haystack[j])
					break;
			}
			if (needle[j - i] == '\0')
				return (haystack + i);
		}
	}
	return (NULL);
}
