#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		add = (num1) * (num2);
		printf("%d\n", add);
	}
	return (0);
}
