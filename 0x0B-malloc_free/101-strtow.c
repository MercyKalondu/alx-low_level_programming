#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2D array
 * @grid: multidimensional array of char
 * @height: height of array
 *
 * Return: nothing
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **a;
	unsigned int c, height, i, j, b1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	a = malloc((height + 1) * sizeof(char *));
	if (a == NULL || height == 0)
	{
		free(a);
		return (NULL);
	}
	for (i = b = 0; i < height; i++)
	{
		for (c = b; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				b++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				a[i] = malloc((c - b + 2) * sizeof(char));
				if (a[i] == NULL)
				{
					ch_free_grid(a, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; b <= c; b++, j++)
			a[i][j] = str[b];
		a[i][j] = '\0';
	}
	a[i] = NULL;
	return (a);
}
