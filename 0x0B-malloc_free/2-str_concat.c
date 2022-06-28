#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string.
 *
 * Return: Length of @s.
 */
int _strlen(char *s)
{
	int i = 0;
	int cont = 0;

	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		cont++;
		i++;
	}
	return (cont);
}

/**
 * *_strcat - concatenates two strings.
 * @dest: destination.
 * @src: source.
 *
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0;
	char *ptr = dest;

	if (src == NULL)
		return (ptr);
	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (; src[j] != '\0'; i++, j++)
		dest[i] = src[j];
	dest[i + 1] = src[j + 1];
	return (ptr);
}
