#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed to the program.
 *
 * @argc: The number of arguments.
 * @argv: An array of pointers to strings containing the arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
