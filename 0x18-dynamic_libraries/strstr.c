#include <stdio.h>
#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: entire string
 * @needle: substring
 * Return: beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}
