#include <stdio.h>

/**
 * main - prints out whether a number randomly generated
 * is positive, negetive or zero
 * Return: Always 0 (success)
 */

int main(void)
{
	int alphabet = 97;

	for (int i = 0; i < 26; i++)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}	
