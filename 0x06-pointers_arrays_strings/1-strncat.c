#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: the destination value
 * @src: the source value
 * @n: input of max bytes to be used
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
			j = n;
	}

	return (dest);
}
