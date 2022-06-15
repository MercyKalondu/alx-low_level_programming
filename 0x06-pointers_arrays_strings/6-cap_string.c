#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @m: input string
 * Return: caps on first letter of a sepator
 */
char *cap_string(char *m)
{
	int i, y;
	int cap = 32;
	int separators[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; m[i] != '\0'; i++)
	{
		if (m[i] >= 'a' && m[i] <= 'z')
		{
			m[i] = m[i] - cap;
		}

		cap = 0;

		for (y = 0; y <= 12; y++)
		{
			if (m[i] == separators[y])
			{
				y = 12;
				cap = 32;
			}
		}
	}
	return (m);
}
