#include "main.h"

/**
 * leet - a function that encodes a string
 * @n: input
 * Return: Always 0 (Success)
 */
char *leet(char *n)
{
	int i, y;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replacer[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (n[i] == find[y])
			{
				n[i] = replacer[y / 2];
				y = 9;
			}
		}
	}

	return (n);
}
