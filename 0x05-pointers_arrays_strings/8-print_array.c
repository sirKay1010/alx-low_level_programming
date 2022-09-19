#include "main.h"
#include <stdio.h>

/**
 * print_array - prints contents of an array to stduout
 * @a: pointer char
 * @n: an int n - size of the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", *a);
			break;
		}
		printf("%d, ", *a);
		a = a + 1;
	}
	printf("\n");
}
