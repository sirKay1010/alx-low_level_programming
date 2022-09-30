#include <stdio.h>

/**
 * main - print all arguments passed into a program
 * @argc: number of arguments passed
 * @argv: array of all arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
