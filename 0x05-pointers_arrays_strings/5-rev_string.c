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
	int half_length;

	p = s;
	while (*p != 0)
	{
		p = p + 1;
		len++;
	}
	len = len - 1;
	half_length = len / 2;
	while (len > half_length)
	{
		p = p - 1;
		c = *s;
		*s = *p;
		*p = c;
		s = s + 1;
		len--;
	}
}
