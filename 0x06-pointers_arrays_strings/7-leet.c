#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to string
 * Return: returns pointer str
 */

char *leet(char *str)
{
	char *tmp;

	for (tmp = str; *tmp != 0; tmp++)
	{
		if (*tmp == 'a' || *tmp == 'A')
		{
			*tmp = 52;
			continue;
		}
		if (*tmp == 'e' || *tmp == 'E')
		{
			*tmp = 51;
			continue;
		}
		if (*tmp == 'o' || *tmp == 'O')
		{
			*tmp = 48;
			continue;
		}
		if (*tmp == 't' || *tmp == 'T')
		{
			*tmp = 55;
			continue;
		}
		if (*tmp == 'l' || *tmp == 'L')
		{
			*tmp = 49;
			continue;
		}
	}
	return (str);
}
