#include <stdio.h>

/**
 * main - multiplies two numbrs
 * @argc: number of command line args
 * @argv: array of command line args
 * Return: 0 if success and 1 if failure
 */

int main(int argc, char *argv[])
{
	int add;
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = *argv[1];
		num2 = *argv[2];
		add = (num1 - 48) * (num2 - 48);
		printf("%d\n%d", add, num1);
	}
	return (0);
}
