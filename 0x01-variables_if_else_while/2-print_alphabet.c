#include <stdio.h>

/**
 * main - prints out alphabets
 * Return: Always 0 (success)
 */

int main(void)
{
	int alphabet = 97;
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
