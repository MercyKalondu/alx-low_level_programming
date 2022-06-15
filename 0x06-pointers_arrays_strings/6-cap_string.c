#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @m: input string
 * Return: caps on first letter of a separator
 */
char *cap_string(char *n)
{
	int i, y;
	int cap = 32;
	int separators[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - cap;
		}

		cap = 0;

		for (y = 0; y <= 12; y++)
		{
			if (n[i] == separators[y])
			{
				y = 12;
				cap = 32;
			}
		}
	}
	return (n);
}
