#include "main.h"

/**
 * print_rev - prints a string in reverse to stdout
 * @s: pointer char
 */

void print_rev(char *s)
{
	char c;
	char *p;
	int len  = 0;

	p = s;
	while (*p != 0)
	{
		p = p + 1;
		len++;
	}
	/**
	 *while (p != s)
	 *{
	 *	c = *p;
	 *	_putchar(c);
	 *	p = p - 1;
	 *}
	 *_putchar(*s);
	 *_putchar('\n');
	 */
	while ((len - 1) >= 0)
	{
		p = p - 1;
		c = *p;
		_putchar(c);
		len--;
	}
	_putchar('\n');

}
