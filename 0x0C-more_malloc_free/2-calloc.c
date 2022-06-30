#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of bytes
 *
 * Return: pointer to the allocated memory
 * if nmemb or size is 0, then _calloc returns NULL
 * if malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(nmemb * size);

	if (m == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		m[i] = 0;

	return (m);
}
