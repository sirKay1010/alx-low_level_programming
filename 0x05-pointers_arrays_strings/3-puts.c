#include "main.h"

/**
 * _puts - prints a string to stduout
 * @str: pointer char
 */

void _puts(char *str)
{
	char c;

	while (*str != 0)
	{
		c = *str;
		_putchar(c);
		str = str + 1;
	}
	_putchar('\n');
}
