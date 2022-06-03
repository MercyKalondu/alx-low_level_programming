#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
<<<<<<< HEAD
 * main - Entry point
 *
 * Return : Always 0 (Success)
=======
 * main - Print random number and state whether it is a positive, negative or zero
 *
 * Return : Always 0.
>>>>>>> 7529c18c8aa43c1a76ad95ab297752901ffc3324
 */
int main (void)
{
	int n;

<<<<<<< HEAD
	srand(time(o));
=======
	srand(time(o))
>>>>>>> 7529c18c8aa43c1a76ad95ab297752901ffc3324
		n=rand() - RAND_MAX / 2;

	if (n>0)
		printf("%d is positive\n",n);
	else if (n<0)
		printf("%d is negative\n",n);
	else
		printf("%d is zero\n",n);
	return (0);
}
