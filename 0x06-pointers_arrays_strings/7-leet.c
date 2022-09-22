#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to string
 * Return: returns pointer str
 */

char *leet(char *str)
{
	char *tmp;
	char *temp;
	int i, j;

	tmp = "aAeEoOtTlL";
	temp = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == tmp[j])
			{
				str[i] = temp[j];
			}
		}
	}
	return (str);
}
