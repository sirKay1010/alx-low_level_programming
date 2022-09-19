#include "main.h"

/**
 * rev_string - prints a string to stduout
 * @s: pointer char
 */

void rev_string(char *s)
{
	char *p;
	char c;
	int len = 0;

	p = s;
	while (*p != 0)
	{
		p = p + 1;
		len++;
	}

	while ((len - 1) > (len / 2))
	{
		c = *s;
		*s = *p;
		*p = c;
		p = p - 1;
		s = s + 1;
		len--;
	}

}
