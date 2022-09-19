#include "main.h"

/**
 * puts2 - prints every other digit in a string
 * @str: pointer char
 */

void puts2(char *str)
{
	char c;

	/**
	 * for (c = *str; c != 0; str = str + 2)
	 *{
	 *	_putchar(c);
	 *}
	 *_putchar('\n');
	 */
	while (*str != 0)
	{
		c = *str;
		_putchar(c);
		str = str + 1;
		if (*str == 0)
			break;
		str = str + 1;
	}
	_putchar('\n');
}
