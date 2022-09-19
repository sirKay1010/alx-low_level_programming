#include "main.h"

/**
 * swap_int - swaps two values
 * @a: pointer a to be swaped
 * @b: pointer b to be swaped
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
