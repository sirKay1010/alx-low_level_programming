#include "main.h"

/**
 * puts_half - prints a string to stduout
 * @str: pointer char
 */

void puts_half(char *str)
{
	char *p;
	char c;
	int len, n;

	p = str;
	len = 0;
	while (*p != 0)
	{
		p = p + 1;
		len++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
		str = str + n;
	}
	else
	{
		n = (len - 1) / 2;
		str = str + n + 1;
	}
	/*
	 * for (i = n; i < len - 1; i++)
	 *{
	 *	_putchar(*str);
	 *	str++;
	 *}
	 */
	while (*str != 0)
	{
		c = *str;
		_putchar(c);
		str++;
	}
	_putchar('\n');
}
