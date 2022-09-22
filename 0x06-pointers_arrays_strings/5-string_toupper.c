#include "main.h"

/**
 * string_toupper - returns a string to all uppercase
 * @str: pointer to array
 *
 * Return: the pointer to strt
 */

char *string_toupper(char *str)
{
	char *temp;

	temp = str;
	while (*str != 0)
	{
		if (*str >= 97 && *str <= 122)
		{
			*str = *str - 97;
			*str = *str + 65;
		}
		str++;
	}
	return (temp);
}
