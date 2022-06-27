#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string, or NULL if error
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int m, i, j, k;

	if (ac == 0)
		return (NULL);
	for (m = i = 1; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			m++;
		m++;
	}

	a = malloc((m + 1) * sizeof(char));

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for(i = j = k = 0; k < m; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			a[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		if (k < m - 1)
			a[k] = av[i][j];
	}
	a[k] = '\0';
	return (a);
}
