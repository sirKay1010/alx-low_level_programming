#include "main.h"

/**
 * *_strcat - catenates the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: string to be catenated to
 * @str: string to be catenated
 *
 * Return: the pointer to dest
 */

char *_strcat(char *dest, char *str)
{
	while (*dest != 0)
	{
		dest = dest + 1;
	}

	while (*str != 0)
	{
		*dest = *str;
		dest = dest + 1;
		str = str + 1;
	}
	*dest = '\0';
	return (dest);
}
