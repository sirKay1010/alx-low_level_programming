#include "main.h"

/**
 * _strncat - copies the string pointed to by src
 * with at most n bytes
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * @n: the number of bytes to be used
 *
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp;
	int count = 0;

	temp = dest;
	while (*temp != '\0')
	{
		temp++;
	}

	while (count < n)
	{
		if (*src == 0)
			break;
		*temp = *src;
		temp++;
		src++;
		count++;
	}
	return (dest);
}
