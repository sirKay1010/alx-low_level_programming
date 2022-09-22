#include "main.h"

/**
 * cap_string - reverses an array
 * @str: pointer to str
 * Return: the pointer to str
 */

char *cap_string(char *str)
{
	char *temp;

	temp = str;
	for (i = 0; str[i] != 0; i++)
	{
		if (i = 0)
		{
			if (str[i] >= 65 && str[i] <= 90)
			{
				str[i] += 32;
			}
		}
		if (*temp == 32 || *temp == '\n' || temp == '\t')
		{
			temp++;
			if (*temp >= 65 && *temp <= 90)
			{
				*temp = *temp + 32;

			}
		}
	}
}
