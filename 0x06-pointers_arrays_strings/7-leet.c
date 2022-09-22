#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to string
 * Return: returns pointer str
 */

char *leet(char *str)
{
	char *tmp;

	tmp = str;
	while (*tmp != 0)
	{
		if (*tmp == 'a' || *tmp == 'A')
		{
			*tmp = 52;
		}
		else if (*tmp == 'e' || *tmp == 'E')
		{
			*tmp = 51;
		}
		else if (*tmp == 'o' || *tmp == 'O')
		{
			*tmp = 48;
		}
		else if (*tmp == 't' || *tmp == 'T')
		{
			*tmp = 55;
		}
		else if (*tmp == 'l' || *tmp == 'L')
		{
			*tmp = 49;
		}
		tmp++;
	}
	return (str);
}
