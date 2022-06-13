#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array
 * @a: input array
 * @n: input n elements
 * Return: nothing
 */
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n-1))
			printf(",");
		i++;
	}
	printf("\n");
}
