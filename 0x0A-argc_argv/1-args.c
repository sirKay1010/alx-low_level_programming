#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of cmd line arguements
 * @argv: array of cmd line string arguements
 * Return: 0 if successful
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
