#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * @str: input string
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
