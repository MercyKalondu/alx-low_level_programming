#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: the buffer storing the string copy
 * @src: the source string
 * @n: input number of char
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
			dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
