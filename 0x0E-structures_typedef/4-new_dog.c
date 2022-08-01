#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new struct dog
 * @name: dogs name
 * @age: new dogs age
 * @owner: new dogs owner
 * Return: pointer ti new dog;
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *n = NULL, *o = NULL;
	int len_n = 0, len_o = 0;

	if ((name == NULL || owner == NULL))
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	len_n = _strlen(name);
	n = malloc(len_n);
	if (n == NULL)
	{
		free (dog);
		return (NULL);
	}
	n = _strcpy(n, name, len_n);
	dog->name = n;

	len_o = _strlen(owner);
	o = malloc(len_o);
	if (o == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	o = _strcpy(o, owner, len_o);
	dog->owner = o;
	dog->age = age;

	return (dog);
}

/**
 * _strcpy - copies src to dest
 * @src: string to copy
 *
 * @dest: buffer to copy it to
 *
 * @len: size of string  to be copied
 *
 * Return: pointer to buffer
 */
char *_strcpy(char *dest, char *src, int len)
{
	int i = 0;

	for (; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
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
