#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints out whether a number randomly generated
 * is positive, negetive or zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n  = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero", n);
	else if (n > 0)
	  	printf("%d is positive", n);
	else
		printf("%d is negetive", n);
	return (0);
}
