#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * main - Print random number and state whether it is a positive, negative or zero
 *
 * Return : Always 0.
 */
int main (void)
{
	int n;

	srand(time(o))
		n=rand() - RAND_MAX / 2;

	if (n>0)
		printf("%d is positive\n",n);
	else if (n<0)
		printf("%d is negative\n",n);
	else
		printf("%d is zero\n",n);
	return (0);
}
