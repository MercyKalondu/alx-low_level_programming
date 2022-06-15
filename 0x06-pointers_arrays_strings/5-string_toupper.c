#include "main.h"

/**
 * string_toupper - a function that changes all lowercase of a string to upper
 * @m: input string
 * Return: capitalized string
 */
char *string_toupper(char *m)
{
	int i;

	for (i = 0; m[i] != '\0'; i++)
	{
		if (m[i] >= 'a' && m[i] <= 'z')
			m[i] = m[i] - 32;
	}
	return (m);
}
