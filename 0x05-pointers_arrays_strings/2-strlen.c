#include "main.h"

/**
 * _strlen - counts a string
 * @s: pointer to use to swap
 * Return: returns value of length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != 0)
	{
		s = s + 1;
		len++;
	}
	return (len);
}
