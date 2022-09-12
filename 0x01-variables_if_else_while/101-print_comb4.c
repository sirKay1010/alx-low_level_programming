#include <stdio.h>

/**
 * main - prints out all possible combination of 3 digits
 * seperated by commas and space
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int k;
	int j;

	for (i = 48; i < 56; i++)
	{
		for (j = i + 1; j < 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);

}
