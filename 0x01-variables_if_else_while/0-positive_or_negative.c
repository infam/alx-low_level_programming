#include <stdlib>
#include <time.h>
#include <stdio.h>
/* more headers goes there */


/* betty style doc for function main goes there */
/**
 * main -entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(timer(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n" n);
	else
		printf("%d is negative\n", n);
	retun (0);
}
