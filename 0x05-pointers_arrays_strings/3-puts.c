#include "main.h"

/**
 * _puts - prints a string
 * @str: input string
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
