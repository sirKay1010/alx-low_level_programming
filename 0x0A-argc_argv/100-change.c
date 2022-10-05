#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int j, change = 0;
	int money[] = {25, 10, 5, 2, 1};
	int input;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	input = atoi(argv[1]);

	if (input <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5; j++)
	{
		while (input >= money[j])
		{
			input = input - money[j];
			change++;
		}
	}
	printf("%d\n", change);
	return (0);
}
