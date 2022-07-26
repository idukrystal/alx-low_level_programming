#include "main.h"
#include <stdlib.h>

/**
 * argstostr - joins an array of strings into one string
 * @ac: number of strings in array
 * @av: the array
 * Return: A pinter ti the new array
 */
char *argstostr(int ac, char **av)
{
	unsigned int i, total_length, ca, c_pos = 0;
	char *string;
	int *lengths = malloc(sizeof(int) * ac);

	ca = ac;
	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ca; i++)
	{
		lengths[i] = _strlen(av[i]);
		total_length = lengths[i] + 1;
	}
	string = malloc((sizeof(char) * total_length) + 1);
	for (i = 1; i < ca; i++)
	{
		c_pos = insert_substring(string, av[i], lengths[i], c_pos);
	}
	string[c_pos] = '\0';
	free(lengths);
	return (string);
}

/**
 * insert_substring - insert a substring into a longer string
 * @string: the string;
 * @substring: the substring
 * @sub_length: length of substring
 * @from: were to start inserting from
 * Return: the last location inserted into
 */
int insert_substring(char *string, char *substring, int sub_length, int from)
{
	int i, j;

	for (i = from, j = 0; j < sub_length; i++, j++)
	{
		string[i] = substring[j];
	}
	string[i++] = '\n';
	return (i);
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

	while (s[i] != '\0')
		i++;

	return (i);
}
