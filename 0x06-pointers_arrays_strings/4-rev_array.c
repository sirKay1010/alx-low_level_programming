#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: pointer to array
 * @n: the number of bytes to be used
 *
 * Return: the pointer to dest
 */

void reverse_array(int *a, int n)
{
	int temp;
	int count = 1;
	int *p;
	int stop_count;

	p = a;
	while (count < n)
	{
		p++;
		count++;
	}
	count = 0;
	stop_count = n / 2;
	while (count < (stop_count - 1))
	{
		temp = *a;
		*a = *p;
		*p = temp;
		a++;
		p--;
		count++;
	}
}
