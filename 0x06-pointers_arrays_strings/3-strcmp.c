#include "main.h"

/**
 * _strcmp - copies the string pointed to by src
 * with at most n bytes
 * to the buffer pointed to by dest
 * @s1: pointer to the buffer in which we copy the string
 * @s2: string to be copied
 *
 * Return: -1 0 or 1 depending on if lessthan equal or greaterthan
 */

int _strcmp(char *s1, char *s2)
{
	int result = 0;

	while (*s1 != 0 && *s2 != 0)
	{
		if (*s1 < *s2)
		{
			result--;
			return (result);
		}
		else if (*s1 > *s2)
		{
			result++;
			return (result);
		}
		else
		{
			s1++;
			s2++;
		}
	}
	return (result);
}
