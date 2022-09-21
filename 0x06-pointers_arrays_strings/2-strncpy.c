#include "main.h"

/**
 * _strncpy - copies the string pointed to by src
 * with at most n bytes
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * @n: the number of bytes to be copied
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;
	char *temp;

	temp = dest;
	while (count < n)
	{
		if (*src == 0)
		{
			*dest = 0;
			dest++;
		}
		else
		{
			*dest = *src;
			dest++;
			src++;
		}
		count++;
	}
	return (temp);
}
