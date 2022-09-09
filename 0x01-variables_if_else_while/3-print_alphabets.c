#include <stdio.h>

/**
 * main - prints out the alphabets, lowercase then uppercase, then a new line
 * Return: Always 0 (success)
 */

int main(void)
{
	int alphabet = 97;
	int alphabet2 = 65;
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet);
		alphabet++;
	}
	for (i = 0; i < 26; i++)
	{
		putchar(alphabet2);
		alphabet2++;
	}
	putchar('\n');
	return (0);
}
