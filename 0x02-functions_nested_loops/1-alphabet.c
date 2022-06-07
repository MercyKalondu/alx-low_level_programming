#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
