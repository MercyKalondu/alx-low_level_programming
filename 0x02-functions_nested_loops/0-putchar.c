#include <studio.h>
#include "main.h"

/**
 * main - print putchar
 * Description: program that prints putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i <= 7; i++)
	{
		putchar(text[i]);
	}
	putchar('\n');

	return (0);
}
