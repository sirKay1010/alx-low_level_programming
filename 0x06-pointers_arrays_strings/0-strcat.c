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
	char *temp;

	temp = dest;
	while (*temp != 0)
	{
		temp = temp + 1;
	}

	while (*str != 0)
	{
		*temp = *str;
		temp = temp + 1;
		str = str + 1;
	}
	*temp = '\0';
	return (dest);
}
