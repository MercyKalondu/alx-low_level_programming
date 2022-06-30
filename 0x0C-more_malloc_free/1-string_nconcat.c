#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes s2 to copy
 *
 * Return: pointer to the newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l;
	char *m;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	m = malloc(sizeof(char) * (i + j + 1));
	if (m == NULL)
		return (NULL);
	for (l = 0; l < i; l++)
		m[l] = s1[l];
	for (l = 0; l < j; l++)
		m[l + i] = s2[l];
	m[i + j] = '\0';
	return (m);
}
