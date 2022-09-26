#include "main.h"
/**
 * _strchr - checks if a character exists in a string
 * @s: the string
 * @c: the character
 * Return: c is the character is present, otherwise NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
