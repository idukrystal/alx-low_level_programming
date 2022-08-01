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
	dog_t *dog = malloc(sizeof(dog_t));
	int len_n = _strlen(name);
	int len_o = _strlen(owner);
	char *n = malloc(len_n);
	char *o = malloc(len_o);

	if (dog == NULL || (n == NULL || o == NULL))
		return (NULL);

	_strcpy(n, name, len_n);
	_strcpy(o, owner, len_o);
	dog->name = n;
	dog->age = age;
	dog->owner = o;

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
	dest[i] = src[i];

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
