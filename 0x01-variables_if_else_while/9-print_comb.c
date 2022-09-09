#include <stdio.h>

/**
 * main - prints out digits seperated by commas adn space
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit = 48;

	while (digit <= 57)
	{
		putchar(digit);
		if (digit == 57)
			break;
		digit++;
		putchar(',');
		putchar(' ');
	}
	return (0);
}
