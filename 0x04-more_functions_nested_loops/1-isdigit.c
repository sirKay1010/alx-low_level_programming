#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: the character to be checked
 * Return: 1 if c is digit, 0 otherwise
 */

int is_digit(int c);
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	return (0);
}
