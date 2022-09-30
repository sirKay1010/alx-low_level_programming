#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of cmd line arguments
 * @argv: array of arguements
 * Return: returns 0 if successsful
 */

int main(int argc __attribute__ ((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
