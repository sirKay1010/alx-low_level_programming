#include "main.h"

/**
 * _isupper - checks for uppercase
 * Return: 1 if c is uppercase, 0 if otherwise
 * @c: character to be checked
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
