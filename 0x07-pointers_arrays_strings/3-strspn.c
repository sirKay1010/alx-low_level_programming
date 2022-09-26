#include "main.h"

/**
 * _strspn - checks for the occurence of a substring in the first part
 * of another
 * @s: the string
 * @accept: the sub-string t
 * Return: num, the number of occurences
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, num;

	num = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != ' '; j++)
		{
			if (accept[i] == s[j])
			{
				num++;
			}
		}
	}
	return (num);
}
