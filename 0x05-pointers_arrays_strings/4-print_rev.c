#include "main.h"

/**
 * print_rev - prints a string in reverse to stdout
 * @s: pointer char
 */

void print_rev(char *s)
{
	char c;
	char *p;

	p = s;
	while (*p != 0)
	{
		p = p + 1;
	}

	while (p != s)
	{
		c = *p;
		_putchar(c);
		p = p - 1;
	}
	_putchar(*s);
	_putchar('\n');

}
