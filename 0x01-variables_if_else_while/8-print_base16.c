#include <stdio.h>

/**
 * main - prints out hexadecimaldigits using ascii values
 * Return: Always 0 (success)
 */

int main(void)
{
	int num = 48;
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(num);
		num++;
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
