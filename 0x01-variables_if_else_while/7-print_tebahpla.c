#include <stdio.h>

/**
 * main - prints alphabets in reverse
 * Return: Always 0 (success)
 */

int main(void)
{
	int alphabet = 122;
	int i;

	for (i = 26; i > 0; i--)
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
