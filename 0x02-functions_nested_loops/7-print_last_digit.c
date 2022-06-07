#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: number in question
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');
	return (last);
}
