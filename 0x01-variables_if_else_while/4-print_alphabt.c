#include <stdio.h>

/**
 * main - prints out whether a number randomly generated
 * is positive, negetive or zero
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int alphabet = 97;

	for (i = 0; i < 26; i++)
	{
		if (alphabet == 101 || alphabet == 113)
		{
			alphabet++;
			continue;
		}
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}

