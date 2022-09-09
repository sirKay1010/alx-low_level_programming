# include <stdio.h>

/**
 * main - prints out digits using ascii values
 * Return: Always 0 (success)
 */

int main(void)
{
	int a = 48;

	while (a < 58)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

